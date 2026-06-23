import torch
import torch.nn as nn
import torch.optim as optim
from torchvision import datasets, transforms
from torch.utils.data import DataLoader, random_split
import os

# --- 1. L'Architecture du Micro-CNN ---
class TinySpeedNet(nn.Module):
    def __init__(self, num_classes=8):
        super(TinySpeedNet, self).__init__()
        self.features = nn.Sequential(
            nn.Conv2d(3, 16, kernel_size=3, padding=1),
            nn.ReLU(),
            nn.MaxPool2d(2, 2), # Réduit de 64x64 à 32x32
            
            nn.Conv2d(16, 32, kernel_size=3, padding=1),
            nn.ReLU(),
            nn.MaxPool2d(2, 2)  # Réduit de 32x32 à 16x16
        )
        self.classifier = nn.Sequential(
            nn.Flatten(),
            nn.Linear(32 * 16 * 16, 128),
            nn.ReLU(),
            nn.Linear(128, num_classes)
        )

    def forward(self, x):
        x = self.features(x)
        x = self.classifier(x)
        return x

def main():
    dataset_path = 'dataset_vitesses' # À modifier si ton dossier s'appelle autrement
    
    if not os.path.exists(dataset_path):
        print(f"Erreur : Le dossier {dataset_path} n'existe pas.")
        return

    # --- 2. Préparation des données ---
    # On ajoute un peu d'augmentation de données pour rendre le modèle robuste
    transform = transforms.Compose([
        transforms.Resize((64, 64)),
        transforms.ColorJitter(brightness=0.2, contrast=0.2), # Simule les changements de lumière CARLA
        transforms.ToTensor(),
        transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])
    ])

    # Chargement automatique basé sur les noms de dossiers (0, 1, 2, 3...)
    full_dataset = datasets.ImageFolder(root=dataset_path, transform=transform)
    
    # Séparation 80% Entraînement / 20% Validation
    train_size = int(0.8 * len(full_dataset))
    val_size = len(full_dataset) - train_size
    train_dataset, val_dataset = random_split(full_dataset, [train_size, val_size])

    train_loader = DataLoader(train_dataset, batch_size=32, shuffle=True)
    val_loader = DataLoader(val_dataset, batch_size=32, shuffle=False)

    print(f"Classes détectées : {full_dataset.classes}")
    print(f"Images d'entraînement : {train_size} | Images de validation : {val_size}")

    # --- 3. Configuration de l'entraînement ---
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    print(f"Entraînement sur : {device}")

    model = TinySpeedNet(num_classes=8).to(device)
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.Adam(model.parameters(), lr=0.001)

    epochs = 15 # 15 cycles suffisent largement pour une tâche si simple

    # --- 4. Boucle d'entraînement ---
    for epoch in range(epochs):
        model.train()
        running_loss = 0.0
        
        for inputs, labels in train_loader:
            inputs, labels = inputs.to(device), labels.to(device)
            
            optimizer.zero_grad()
            outputs = model(inputs)
            loss = criterion(outputs, labels)
            loss.backward()
            optimizer.step()
            
            running_loss += loss.item()

        # Évaluation
        model.eval()
        correct = 0
        total = 0
        with torch.no_grad():
            for inputs, labels in val_loader:
                inputs, labels = inputs.to(device), labels.to(device)
                outputs = model(inputs)
                _, predicted = torch.max(outputs.data, 1)
                total += labels.size(0)
                correct += (predicted == labels).sum().item()

        val_acc = 100 * correct / total if total > 0 else 0
        print(f"Epoch [{epoch+1}/{epochs}] - Loss: {running_loss/len(train_loader):.4f} - Validation Accuracy: {val_acc:.2f}%")

    # --- 5. Sauvegarde ---
    save_path = 'speed_classifier.pth'
    torch.save(model, save_path)
    print(f"\nModèle sauvegardé sous : {save_path}")
    print(f"Poids du fichier : {os.path.getsize(save_path) / 1024:.2f} Ko")

if __name__ == '__main__':
    main()