# ws_carla_ros — Workspace ROS2

Workspace ROS2 pour le projet de prédiction de trajectoires multi-agents.
Fonctionne avec CARLA 0.9.13 + ROS2 Galactic.

## Prérequis

- CARLA 0.9.13 installé dans `~/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13`
- ROS2 Galactic installé dans `/opt/ros/galactic`
- Checkpoint du modèle `.ckpt` (à récupérer sur le serveur GPU du labo)

## Lancement complet (5 terminaux)

### Terminal 1 — Simulateur CARLA
```bash
cd ~/Desktop/Stage/Documents\ fournis/Carla/CARLA_0.9.13
./CarlaUE4.sh
```
Attendre que la fenêtre CARLA s'ouvre complètement avant de continuer.

### Terminal 2 — Bridge CARLA/ROS2
```bash
export PYTHONPATH=$PYTHONPATH:"/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13/PythonAPI/carla/dist/carla-0.9.13-py3.7-linux-x86_64.egg"
source /opt/ros/galactic/setup.bash
source ~/Desktop/Stage/Projet/ws_carla_ros/install/setup.bash
ros2 launch carla_ros_bridge carla_ros_bridge_with_example_ego_vehicle.launch.py
```

### Terminal 3 — Node de prédiction
```bash
source /opt/ros/galactic/setup.bash
source ~/Desktop/Stage/Projet/ws_carla_ros/install/setup.bash
ros2 run carla_prediction prediction_node \
  --ros-args \
  --params-file ~/Desktop/Stage/Projet/ws_carla_ros/carla_prediction/config/prediction_params.yaml \
  -p use_sim_time:=true
```
Le checkpoint et les paramètres sont définis dans `carla_prediction/config/prediction_params.yaml`.
Sans checkpoint dans le yaml → dry-run (pipeline validé, pas de prédiction).
Avec checkpoint → prédictions publiées sur `/carla/prediction/trajectories`.

### Terminal 4 — Visualisation carte OSM
```bash
export PYTHONPATH=$PYTHONPATH:"/home/martin/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13/PythonAPI/carla/dist/carla-0.9.13-py3.7-linux-x86_64.egg"
source /opt/ros/galactic/setup.bash
source ~/Desktop/Stage/Projet/ws_carla_ros/install/setup.bash
ros2 launch carla_map_visualization map_visualization.launch.py
```

### Terminal 5 — RViz
```bash
source /opt/ros/galactic/setup.bash
rviz2
```

Dans RViz :
1. Fixed Frame → `map`
2. Add → By topic :
   - `/carla/map_visualization` → MarkerArray (carte OSM)
   - `/carla/markers` → MarkerArray (véhicules)
   - `/carla/prediction/trajectories` → MarkerArray (trajectoires prédites)
   - `/carla/prediction/history` → MarkerArray (historique)

## Rebuild (si modification du code)
```bash
cd ~/Desktop/Stage/Projet/ws_carla_ros
colcon build --packages-select carla_prediction
```

## Topics principaux

| Topic | Type | Description |
|---|---|---|
| `/carla/hero/odometry` | Odometry | Position ego |
| `/carla/objects` | ObjectArray | Agents détectés |
| `/carla/prediction/trajectories` | MarkerArray | Trajectoires prédites |
| `/carla/prediction/history` | MarkerArray | Historique agents |
| `/carla/map_visualization` | MarkerArray | Carte OSM |


## Spawner des agents NPC (trafic)

Dans un terminal séparé, après le bridge :
```bash
conda deactivate
cd ~/Desktop/Stage/Documents\ fournis/Carla/CARLA_0.9.13/PythonAPI/examples
python3 generate_traffic.py -n 20 --asynch
```
`--asynch` obligatoire — le bridge ROS tourne en mode synchrone.

## Lancement automatique

```bash
./scripts/launch_all.sh
```
Lance CARLA, le bridge, le node de prédiction, la carte OSM et RViz en séquence.