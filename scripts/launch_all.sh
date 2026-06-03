#!/bin/bash
# Lance l'ensemble du pipeline CARLA + ROS2 + prédiction + RViz
# Usage : ./scripts/launch_all.sh [chemin_checkpoint]

CARLA_PATH="$HOME/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13"
CARLA_EGG="$CARLA_PATH/PythonAPI/carla/dist/carla-0.9.13-py3.7-linux-x86_64.egg"
WS="$HOME/Desktop/Stage/Projet/ws_carla_ros"
CKPT="${1:-}"
ROS_SOURCE="source /opt/ros/galactic/setup.bash && source $WS/install/setup.bash"
CARLA_ENV="export PYTHONPATH=\$PYTHONPATH:\"$CARLA_EGG\""

PID_DIR="/tmp/carla_pipeline_launch"
mkdir -p "$PID_DIR"
rm -f "$PID_DIR"/*.pid

# ─── COULEURS ───────────────────────────────────────────────────────────────
R='\033[0;31m' G='\033[0;32m' Y='\033[0;33m'
B='\033[0;34m' C='\033[0;36m' W='\033[1;37m' N='\033[0m'

# ─── NETTOYAGE ──────────────────────────────────────────────────────────────
cleanup() {
    echo ""
    echo -e "${R}🛑 Arrêt en cours...${N}"
    for pidfile in "$PID_DIR"/*.pid; do
        [ -f "$pidfile" ] || continue
        pid=$(cat "$pidfile")
        pgid=$(ps -o pgid= -p "$pid" 2>/dev/null | tr -d ' ')
        [ -n "$pgid" ] && kill -TERM -"$pgid" 2>/dev/null
        kill -TERM "$pid" 2>/dev/null
    done
    sleep 2
    pkill -f "CarlaUE4"          2>/dev/null
    pkill -f "carla_ros_bridge"  2>/dev/null
    pkill -f "prediction_node"   2>/dev/null
    pkill -f "map_visualization" 2>/dev/null
    pkill -f "rviz2"             2>/dev/null
    rm -rf "$PID_DIR"
    echo -e "${G}✅ Tout arrêté.${N}"
}
trap cleanup EXIT INT TERM

if ! command -v gnome-terminal &> /dev/null; then
    echo -e "${R}Erreur : gnome-terminal requis${N}"; exit 1
fi

open_t() {
    local title="$1" name="$2" cmd="$3"
    gnome-terminal --title="$title" -- bash -c "echo \$\$ > \"$PID_DIR/$name.pid\"; $cmd; exec bash"
}

wait_bar() {
    local secs=$1 label="$2"
    printf "${Y}⏳ %-35s${N} " "$label"
    for ((i=0; i<secs; i++)); do
        printf "█"
        sleep 1
    done
    echo -e " ${G}OK${N}"
}

# ─── HEADER ─────────────────────────────────────────────────────────────────
clear
echo -e "${W}"
echo "  ╔══════════════════════════════════════════╗"
echo "  ║      PIPELINE CARLA 0.9.13 + ROS2        ║"
echo "  ║   Prediction · Map · RViz · Bridge       ║"
echo "  ╚══════════════════════════════════════════╝"
echo -e "${N}"
[ -n "$CKPT" ] && echo -e "${C}  Checkpoint : $CKPT${N}\n"

# ─── LANCEMENT ──────────────────────────────────────────────────────────────
echo -e "${B}▶ [1/6]${N} CARLA Simulator ${C}(OffScreen)${N}"
open_t "CARLA Simulator" "t1" "cd \"$CARLA_PATH\" && ./CarlaUE4.sh -RenderOffScreen"
wait_bar 8 "Démarrage CARLA..."

echo -e "${B}▶ [2/6]${N} ROS2 Bridge"
open_t "carla_ros_bridge" "t2" "$CARLA_ENV && $ROS_SOURCE && ros2 launch carla_ros_bridge carla_ros_bridge_with_example_ego_vehicle.launch.py"
wait_bar 12 "Démarrage bridge..."

echo -e "${B}▶ [3/6]${N} Trafic NPC"
open_t "NPC Traffic" "t3" "cd \"$CARLA_PATH/PythonAPI/examples\" && source $HOME/miniconda3/etc/profile.d/conda.sh && conda activate carla_env && PYTHONPATH=\"$CARLA_EGG:\$PYTHONPATH\" python3 generate_traffic.py -n 50 -w 10 --safe --asynch"
wait_bar 3 "Spawn NPC..."

echo -e "${B}▶ [4/6]${N} Prediction node"
open_t "prediction_node" "t4" "$ROS_SOURCE && ros2 run carla_prediction prediction_node --ros-args --params-file $WS/carla_prediction/config/prediction_params.yaml -p use_sim_time:=true"
wait_bar 2 "Chargement prediction node..."

echo -e "${B}▶ [5/6]${N} Map visualization"
open_t "carla_map_visualization" "t5" "$CARLA_ENV && $ROS_SOURCE && ros2 launch carla_map_visualization map_visualization.launch.py"
wait_bar 2 "Chargement map..."

echo -e "${B}▶ [6/6]${N} RViz2"
sleep 4
open_t "RViz2" "t6" "source /opt/ros/galactic/setup.bash && ros2 run rviz2 rviz2 -d $HOME/Desktop/CarlaPrediction/configs/config.rviz --ros-args -p use_sim_time:=true"

# ─── STATUT FINAL ───────────────────────────────────────────────────────────
echo ""
echo -e "  ${W}╔══════════════════════════════════════════╗${N}"
echo -e "  ${W}║${N}  ${G}✅ Pipeline opérationnel${N}                ${W}║${N}"
echo -e "  ${W}║${N}                                          ${W}║${N}"
echo -e "  ${W}║${N}  ${C}RViz — Fixed Frame :${N} map              ${W}  ║${N}"
echo -e "  ${W}║${N}  Add → By topic :                       ${W} ║${N}"
echo -e "  ${W}║${N}    /carla/map_visualization  MarkerArray ${W}║${N}"
echo -e "  ${W}║${N}    /carla/prediction/...     MarkerArray ${W}║${N}"
echo -e "  ${W}║${N}                                          ${W}║${N}"
echo -e "  ${W}║${N}  ${R}⏎  Entrée pour tout arrêter${N}             ${W}║${N}"
echo -e "  ${W}╚══════════════════════════════════════════╝${N}"
echo ""
read -r

