import os
import cv2

# Chemins vers ton dataset YOLO
dataset_dir = 'dataset_vision'
splits = ['train', 'val']

# Dossier de sortie pour les panneaux découpés
out_dir = 'dataset_vitesses/a_trier'
os.makedirs(out_dir, exist_ok=True)

count = 0

for split in splits:
    img_dir = os.path.join(dataset_dir, 'images', split)
    lbl_dir = os.path.join(dataset_dir, 'labels', split)
    
    if not os.path.exists(lbl_dir):
        continue

    for lbl_file in os.listdir(lbl_dir):
        if not lbl_file.endswith('.txt'):
            continue
            
        # Retrouver l'image correspondante (.png ou .jpg)
        base_name = os.path.splitext(lbl_file)[0]
        img_path = os.path.join(img_dir, base_name + '.png')
        if not os.path.exists(img_path):
            img_path = os.path.join(img_dir, base_name + '.jpg')
            if not os.path.exists(img_path):
                continue
                
        img = cv2.imread(img_path)
        if img is None:
            continue
            
        h, w = img.shape[:2]
        
        # Lire les annotations YOLO
        with open(os.path.join(lbl_dir, lbl_file), 'r') as f:
            lines = f.readlines()
            
        for line in lines:
            data = line.strip().split()
            class_id = int(data[0])
            
            # On ne garde que la classe 2 (speed_limit_sign)
            if class_id == 2:
                cx, cy, bw, bh = map(float, data[1:])
                
                # Conversion des coordonnées normalisées vers pixels
                x1 = int((cx - bw / 2) * w)
                y1 = int((cy - bh / 2) * h)
                x2 = int((cx + bw / 2) * w)
                y2 = int((cy + bh / 2) * h)
                
                # S'assurer qu'on ne sort pas de l'image
                x1, y1 = max(0, x1), max(0, y1)
                x2, y2 = min(w, x2), min(h, y2)
                
                # Découper le panneau
                crop = img[y1:y2, x1:x2]
                
                # Ignorer les panneaux minuscules (ex: moins de 10x10 pixels)
                if crop.shape[0] > 10 and crop.shape[1] > 10:
                    cv2.imwrite(os.path.join(out_dir, f"sign_{count}.jpg"), crop)
                    count += 1

print(f"Terminé ! {count} panneaux de vitesse ont été extraits et découpés dans '{out_dir}'.")
