import pandas as pd # type: ignore
from torch.utils.data import Dataset
import torch
import cv2
import os
import math
import torch.nn as nn
import numpy as np

class VehicleDynamicModel(nn.Module):
    """
    Modèle cinématique CTRA (Constant Turn Rate and Acceleration).
    Calcule l'état suivant (x, y, v, yaw) en fonction de l'état actuel et des commandes (accélération, yaw_rate).
    """
    def __init__(self, dt=0.1):
        super(VehicleDynamicModel, self).__init__()
        self.dt = dt
        
    def forward(self, state, control):
        """
        state: [Batch, Agents, 4] -> (x, y, yaw_norm, speed_norm)
        control: [Batch, Agents, 2] -> (yaw_rate, acceleration)
        
        FIX : les index 2 et 3 étaient inversés (v = state[2] = yaw, yaw = state[3] = speed).
        Le CTRA recevait donc yaw_norm ≈ 0 comme vitesse → déplacement quasi nul à chaque step.
        On dénormalise ici pour travailler en unités physiques réelles.
        """
        x, y = state[..., 0], state[..., 1]
        # Index 2 = yaw_norm ∈ [-1,1] → convertir en radians pour les sin/cos du CTRA
        yaw = state[..., 2] * math.pi
        # Index 3 = speed_norm ∈ [0,1] → convertir en m/s pour les distances
        v   = state[..., 3] * 30.0
        yaw_rate, a = control[..., 0], control[..., 1]
        
        # Pour éviter la division par zéro quand le volant est droit
        epsilon = 1e-5
        yaw_rate_safe = torch.where(torch.abs(yaw_rate) < epsilon, epsilon * torch.sign(yaw_rate + epsilon), yaw_rate)
        
        # Formules du modèle CTRA (Runge-Kutta simplifié ou Euler)
        next_yaw = yaw + yaw_rate * self.dt
        next_v = v + a * self.dt
        
        next_x = x + (v / yaw_rate_safe) * (torch.sin(next_yaw) - torch.sin(yaw))
        next_y = y + (v / yaw_rate_safe) * (-torch.cos(next_yaw) + torch.cos(yaw))
        
        # On renormalise yaw et speed pour que les états intermédiaires restent
        # dans la même plage que les données d'entraînement (évite la dérive d'échelle).
        next_yaw_norm = next_yaw / math.pi          # → ∈ [-1, 1] environ
        next_v_norm   = torch.clamp(next_v / 30.0, 0.0, 1.5)  # → ∈ [0, ~1]
        
        next_state = torch.stack([next_x, next_y, next_yaw_norm, next_v_norm], dim=-1)
        return next_state

class DifferentiableEKF(nn.Module):
    """
    Module de fusion HKR-Net.
    Fusionne la trajectoire dynamique (état prédit) et la trajectoire sociale (mesure).
    """
    def __init__(self, vdm):
        super(DifferentiableEKF, self).__init__()
        self.vdm = vdm

    def forward(self, last_state, last_P, control, Q, z, R):
        # --- 1. ÉTAPE DE PRÉDICTION (Physique) ---
        # s_pred = f(s_prev, u) [Eq. 15a]
        s_pred = self.vdm(last_state, control)
        
        # Calcul de la Jacobienne F (df/ds) pour la propagation de l'incertitude
        F = self._compute_jacobian(last_state)
        
        # P_pred = F * P_prev * F^T + Q [Eq. 15c]
        P_pred = torch.matmul(torch.matmul(F, last_P), F.transpose(-1, -2)) + Q
        
        # --- 2. ÉTAPE DE MISE À JOUR (Sociale/Interaction) ---
        # Gain de Kalman K = P_pred * (P_pred + R)^-1 [Eq. 16a]
        S = P_pred + R
        K = torch.matmul(P_pred, torch.inverse(S + 1e-6 * torch.eye(4, device=S.device)))
        
        # État final s = s_pred + K * (z - s_pred) [Eq. 16b]
        residual = z - s_pred
        s_final = s_pred + torch.matmul(K, residual.unsqueeze(-1)).squeeze(-1)
        
        # Incertitude finale P = (I - K) * P_pred [Eq. 16c]
        I = torch.eye(4, device=s_pred.device).expand_as(P_pred)
        P_final = torch.matmul(I - K, P_pred)
        
        return s_final, P_final

    def _compute_jacobian(self, state):
        # Jacobienne simplifiée du modèle CTRA [cite: 348, 370]
        batch_size, num_agents, _ = state.shape
        dt = self.vdm.dt
        v = state[..., 2]
        yaw = state[..., 3]
        
        F = torch.eye(4, device=state.device).repeat(batch_size, num_agents, 1, 1)
        F[..., 0, 2] = torch.cos(yaw) * dt
        F[..., 0, 3] = -v * torch.sin(yaw) * dt
        F[..., 1, 2] = torch.sin(yaw) * dt
        F[..., 1, 3] = v * torch.cos(yaw) * dt
        return F

class CarlaTrajectoryDataset(Dataset):
    """
    Rôle : Convertir un fichier CSV brut en données mathématiques parfaites pour PyTorch.
    Pas efficient, ICI on ego-centre en "direct" là où il faudrait l'avoir fait en amont (que pour la V1 car après introduction de Absolute2Ego_Coordinates_Dataset.py qui transforme le set de données abs en ego center )
        X_physique : les données réelle à l'instant donné et 5 secondes avant
            x,y : coordonnées en x:y de la voiture (pour chaque frame)
            yaz : angle de rotation du volant de la voiture (pour chaque frame)
            speed_m_s : vitesse en m/s de la voiture (pour chaque frame)
        X_image : l'image Bird Eye View à l'instant T
        Y_futur : les données réelles à prédire
            x,y : coordonnées en x:y de la voiture (pour chaque frame)

    """
    def __init__(self, csv_file, img_dir, history_sec=5, future_sec=3, fps=20):
        self.data = pd.read_csv(csv_file) #charger csv 
        self.img_dir = img_dir
        
        self.hist_frames = history_sec * fps  # 20fps*5s = 100frames (dans notre exemple)
        self.fut_frames = future_sec * fps    # 20fps*3s = 60frames
        self.window_size = self.hist_frames + self.fut_frames

    def __len__(self):
        #pour pas dépasser (on ne peut pas regarder les 100 frames précédentes à la 1ere ni prédire les 60 futurs de la dernières)
        return len(self.data) - self.window_size 

    def __getitem__(self, idx):
        current_time_idx = idx + self.hist_frames
        
        # 1. Extraction brute (coordonnées brutes Carla)
        history_data = self.data.iloc[idx : current_time_idx]
        future_data = self.data.iloc[current_time_idx : current_time_idx + self.fut_frames]
        
        X_physique = torch.tensor(history_data[['x', 'y', 'yaw', 'speed_m_s']].values, dtype=torch.float32)
        Y_futur = torch.tensor(future_data[['x', 'y']].values, dtype=torch.float32)

        #Passage en ego-centric (voiture au centre, orienté vers le haut TOUJOURS)

        #.clone pour faire des copies pour pouvoir faire les calculs sans fausser les données
        #(on modifierais X_physique sans ca et c'est pa bien, non non non)
        pos_x_present = X_physique[-1, 0].clone()
        pos_y_present = X_physique[-1, 1].clone()
        yaw_present_deg = X_physique[-1, 2].clone() # CARLA donne des DEGRÉS
        
        # 1. CONVERSION EN RADIANS
        yaw_present_rad = yaw_present_deg * (np.pi / 180.0)
        
        # 2. TRANSLATION (On amène à 0,0)
        #Soustraction de notre position actuelle à tous les points
        #On est ego-centré -> voiture en (0,0)
        X_physique[:, 0] -= pos_x_present
        X_physique[:, 1] -= pos_y_present
        Y_futur[:, 0] -= pos_x_present
        Y_futur[:, 1] -= pos_y_present
        
        # 3. ROTATION (Avec les Radians)
        #pour faire en sorte que la voiture soit vers le haut
        cos_t = torch.cos(-yaw_present_rad)
        sin_t = torch.sin(-yaw_present_rad)
        
        #Pour appliquer la matrice de rotation mettant la voiture vers le haut
        def faire_pivoter(tenseurs_xy):
            x = tenseurs_xy[:, 0].clone()
            y = tenseurs_xy[:, 1].clone()
            tenseurs_xy[:, 0] = x * cos_t - y * sin_t
            tenseurs_xy[:, 1] = x * sin_t + y * cos_t
            return tenseurs_xy
        
        #Et la on est vers le haut
        X_physique[:, :2] = faire_pivoter(X_physique[:, :2])
        Y_futur[:, :2] = faire_pivoter(Y_futur[:, :2])
        
        # 4. On garde l'historique des angles relatif au présent et on borne entre -180 et 180
        X_physique[:, 2] -= yaw_present_deg
        X_physique[:, 2] = (X_physique[:, 2] + 180) % 360 - 180
        
        # 5. --- LA NORMALISATION (CRUCIAL) ---
        # On divise par 180 pour que l'angle soit compris entre -1.0 et 1.0
        X_physique[:, 2] /= 180.0
        # On divise par 30 (vitesse max arbitraire) pour que la vitesse soit autour de 0.0 à 1.0
        X_physique[:, 3] /= 30.0
        # ==========================================

        # Extraction de l'image (Rien ne change ici)
        current_frame_number = int(self.data.iloc[current_time_idx]['frame'])
        img_path = os.path.join(self.img_dir, f"bev/bev_{current_frame_number}.png")
        img = cv2.imread(img_path)
        if img is None: #Si jamais ya pas l'image, on en donne une vide
            X_image = torch.zeros((256, 256, 3), dtype=torch.float32)
        else:
            X_image = torch.tensor(img, dtype=torch.float32)

        return X_physique, X_image, Y_futur
    


class CerveauTrajectoire(nn.Module):
    """
    Le Modèle Baseline (Aveugle). Ne se fie qu'à l'inertie et l'angle.

    Cette classe agit comme le "cerveau" de la voiture autonome.

    Architecture :
    - Un LSTM (Long Short-Term Memory) agit comme la "Mémoire". Il analyse l'historique
      (les 5 dernières secondes de déplacement) frame par frame et en extrait un résumé mathématique.
    - Une couche Linéaire agit comme le "Muscle" (ou prédicteur). Elle prend ce résumé
      et génère les futures coordonnées (X, Y) pour les 3 prochaines secondes.

    Règle Ego-Centrique :
    PAS entraîné avec des coordonnées GPS ou globales absolues (ex: X=84, Y=-85).
    réfléchit de manière relative ("Ego-Centric") :
    - Le point (X=0, Y=0) est TOUJOURS la position de la voiture à l'Instant T (le présent).
    - L'historique (Passé) représente où la voiture ÉTAIT par rapport à sa position actuelle.
    - La prédiction (Futur) représente où la voiture SERA par rapport à sa position actuelle.
    """
    def __init__(self, hist_frames=100, fut_frames=60):
        super(CerveauTrajectoire, self).__init__()
        
        self.fut_frames = fut_frames
        
        # LSTM (Mémoire long-terme)
        #Transforme 100 frames (400 valeurs en tout) en 64 valeurs
        self.lstm = nn.LSTM(input_size=4, hidden_size=64, batch_first=True)
        
        # Couche Linéaire (Le Muscle)
        #pour transformer les 64 valeurs en 120 (60 en X et 60 en Y)
        self.predicteur = nn.Linear(in_features=64, out_features=fut_frames * 2)

    def forward(self, x_physique):

        lstm_out, (hidden, cell) = self.lstm(x_physique)
        resume_du_passe = hidden[-1] 
        prediction_brute = self.predicteur(resume_du_passe) # Forme (Batch, 120)
        
        # .view() redimensionne la sortie plate de 120 chiffres 
        # en un tableau propre de 60 lignes et 2 colonnes.
        prediction_finale = prediction_brute.view(-1, self.fut_frames, 2) # Forme (Batch, 60, 2)
        
        return prediction_finale



class MultiAgentDataset(Dataset):
    def __init__(self, pt_file, img_dir, max_agents=6, hist_frames=100, fut_frames=60):
        self.data = torch.load(pt_file)
        self.img_dir = img_dir
        self.max_agents = max_agents
        self.hist_frames = hist_frames
        self.fut_frames = fut_frames

    def __len__(self):
        return len(self.data)

    def __getitem__(self, idx):
        scene = self.data[idx]
        frame = scene['frame']
        agents_dict = scene['agents']
        
        # NOUVEAU : X_physique a maintenant 5 dimensions (x, y, cos, sin, v)
        X_physique = torch.zeros((self.max_agents, self.hist_frames, 5), dtype=torch.float32)
        Y_futur = torch.zeros((self.max_agents, self.fut_frames, 2), dtype=torch.float32)
        agent_mask = torch.zeros((self.max_agents,), dtype=torch.bool)
        
        agent_idx = 0
        for agent_id, traj in agents_dict.items():
            if agent_idx >= self.max_agents: break
            # On force l'Ego à l'index 0
            if agent_idx == 0 and agent_id != 'ego': continue 
            
            traj_tensor = torch.tensor(traj, dtype=torch.float32)
            
            # Transformation 4D -> 5D à la volée
            yaw_norm = traj_tensor[:self.hist_frames, 2]
            yaw_rad = yaw_norm * math.pi
            cos_yaw = torch.cos(yaw_rad)
            sin_yaw = torch.sin(yaw_rad)
            
            X_physique[agent_idx] = torch.stack([
                traj_tensor[:self.hist_frames, 0],
                traj_tensor[:self.hist_frames, 1],
                cos_yaw,
                sin_yaw,
                traj_tensor[:self.hist_frames, 3]
            ], dim=-1)
            
            Y_futur[agent_idx] = traj_tensor[self.hist_frames:, :2]
            agent_mask[agent_idx] = True
            agent_idx += 1
            
        img_path = os.path.join(self.img_dir, f"bev/bev_{frame}.png")
        img = cv2.imread(img_path)
        if img is None:
            X_image = torch.zeros((256, 256, 3), dtype=torch.float32)
        else:
            X_image = torch.tensor(img, dtype=torch.float32)
            
        return X_physique, X_image, Y_futur, agent_mask

class CerveauMultiAgent(nn.Module):
    def __init__(self, num_modes=3, config_hkr=None):
        super(CerveauMultiAgent, self).__init__()
        self.num_modes = num_modes
        self.dt = config_hkr['dt'] if config_hkr else 0.1
        
        self.vision = nn.Sequential(
            nn.Conv2d(3, 32, 5, stride=2), nn.ReLU(),
            nn.Conv2d(32, 64, 5, stride=2), nn.ReLU(),
            nn.AdaptiveAvgPool2d((8, 8)), nn.Flatten()
        )
        
        # Le LSTM prend 5 entrées (x, y, cos, sin, v)
        self.state_encoder = nn.LSTM(5, 128, batch_first=True)
        
        self.s_attn = nn.Linear(128, 128)
        self.m_attn = nn.Linear(4096, 128)
        
        self.vdm = VehicleDynamicModel(dt=self.dt)
        self.ekf = DifferentiableEKF(self.vdm)
        
        self.confidence_head  = nn.Linear(384, num_modes)
        self.dynamic_decoders = nn.ModuleList([nn.Linear(384, 2 + 4) for _ in range(num_modes)])
        self.social_decoders  = nn.ModuleList([nn.Linear(384, 4 + 4) for _ in range(num_modes)])

    def forward(self, x_physique, x_image):
        batch_size, num_agents, hist_len, _ = x_physique.shape
        
        res_visuel = self.vision(x_image.permute(0, 3, 1, 2) / 255.0) 
        res_visuel_reduit = torch.relu(self.m_attn(res_visuel)) 
        
        # L'encodeur traite la dimension 5
        x_phys_flat = x_physique.view(-1, hist_len, 5)
        _, (h_n, _) = self.state_encoder(x_phys_flat)
        res_physique = h_n[-1].view(batch_size, num_agents, 128) 
        res_physique_reduit = torch.relu(self.s_attn(res_physique)) 
        
        sum_all       = res_physique_reduit.sum(dim=1, keepdim=True)          
        social_ctx    = (sum_all - res_physique_reduit) / max(num_agents - 1, 1)  

        feat_fusion = torch.cat([
            res_physique_reduit,                                          
            social_ctx,                                                   
            res_visuel_reduit.unsqueeze(1).expand(-1, num_agents, -1),    
        ], dim=-1)  
        
        # Reconversion 5D -> 4D pour initialiser le Filtre de Kalman
        curr_state_5d = x_physique[:, :, -1, :]
        yaw_rad_reconstruit = torch.atan2(curr_state_5d[..., 3], curr_state_5d[..., 2])
        yaw_norm = yaw_rad_reconstruit / math.pi
        
        curr_state_4d = torch.stack([
            curr_state_5d[..., 0], # x
            curr_state_5d[..., 1], # y
            yaw_norm,              # yaw_norm
            curr_state_5d[..., 4]  # v_norm
        ], dim=-1)
        
        all_modes_traj = []
        for mode_idx in range(self.num_modes):
            dyn_out = self.dynamic_decoders[mode_idx](feat_fusion)
            u = torch.tanh(dyn_out[..., :2]) * 5.0
            Q = torch.diag_embed(torch.exp(dyn_out[..., 2:]))
            soc_out = self.social_decoders[mode_idx](feat_fusion)
            z = soc_out[..., :4]
            R = torch.diag_embed(torch.exp(soc_out[..., 4:]))

            curr_state = curr_state_4d.clone() 
            curr_P     = torch.eye(4, device=x_physique.device).repeat(batch_size, num_agents, 1, 1) * 1e-2
            traj_mode  = []
            
            for t in range(60):
                curr_state, curr_P = self.ekf(curr_state, curr_P, u, Q, z, R)
                traj_mode.append(curr_state[..., :2])

            all_modes_traj.append(torch.stack(traj_mode, dim=2))  

        predictions = torch.stack(all_modes_traj, dim=2)          
        conf_scores = torch.softmax(self.confidence_head(feat_fusion), dim=-1)  
        return predictions, conf_scores