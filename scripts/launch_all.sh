#!/bin/bash
# Lance l'ensemble du pipeline CARLA + ROS2 + prédiction + RViz
# Usage : ./scripts/launch_all.sh [chemin_checkpoint]
#
# Exemple avec checkpoint :
#   ./scripts/launch_all.sh /chemin/vers/model.ckpt

CARLA_PATH="$HOME/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13"
CARLA_EGG="$CARLA_PATH/PythonAPI/carla/dist/carla-0.9.13-py3.7-linux-x86_64.egg"
WS="$HOME/Desktop/Stage/Projet/ws_carla_ros"
CKPT="${1:-}"   # argument optionnel : chemin du checkpoint

ROS_SOURCE="source /opt/ros/galactic/setup.bash && source $WS/install/setup.bash"
CARLA_ENV="export PYTHONPATH=\$PYTHONPATH:\"$CARLA_EGG\""

# Vérifie que gnome-terminal est disponible
if ! command -v gnome-terminal &> /dev/null; then
    echo "Erreur : gnome-terminal requis"
    exit 1
fi

echo "Lancement du pipeline CARLA + ROS2..."

# Terminal 1 — CARLA
gnome-terminal --title="CARLA Simulator" -- bash -c "
    cd \"$CARLA_PATH\"
    ./CarlaUE4.sh
    exec bash
"

echo "Attente démarrage CARLA (8s)..."
sleep 8

# Terminal 2 — Bridge
gnome-terminal --title="carla_ros_bridge" -- bash -c "
    $CARLA_ENV
    $ROS_SOURCE
    ros2 launch carla_ros_bridge carla_ros_bridge_with_example_ego_vehicle.launch.py
    exec bash
"

echo "Attente bridge (5s)..."
sleep 5

# Terminal 3 — Node prédiction
PRED_ARGS="--ros-args -p raw_fps:=10"
if [ -n "$CKPT" ]; then
    PRED_ARGS="$PRED_ARGS -p model_ckpt:=\"$CKPT\""
fi

gnome-terminal --title="prediction_node" -- bash -c "
    $ROS_SOURCE
    ros2 run carla_prediction prediction_node $PRED_ARGS
    exec bash
"

sleep 2

# Terminal 4 — Carte OSM
gnome-terminal --title="carla_map_visualization" -- bash -c "
    $CARLA_ENV
    $ROS_SOURCE
    ros2 launch carla_map_visualization map_visualization.launch.py
    exec bash
"

sleep 2

# Terminal 5 — RViz
gnome-terminal --title="RViz2" -- bash -c "
    source /opt/ros/galactic/setup.bash
    rviz2
    exec bash
"

echo ""
echo "Pipeline lancé."
echo "Dans RViz : Fixed Frame = map, puis Add → By topic"
echo "  /carla/map_visualization  → MarkerArray"
echo "  /carla/prediction/trajectories → MarkerArray"
