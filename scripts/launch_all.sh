#!/bin/bash
# Lance l'ensemble du pipeline CARLA + ROS2 + prédiction + RViz
# Usage : ./scripts/launch_all.sh --town Town04 --npc 50 --ckpt /chemin/du/checkpoint --weather 10 [--debug]

CARLA_PATH="$HOME/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13"
CARLA_EGG="$CARLA_PATH/PythonAPI/carla/dist/carla-0.9.13-py3.7-linux-x86_64.egg"
WS="$HOME/Desktop/Stage/Projet/ws_carla_ros"

# ─── VALEURS PAR DÉFAUT ──────────────────────────────────────────────────────
TOWN="Town03"
NPC=100
WEATHER=10
CKPT=""
DEBUG=false

# ─── ANALYSE DES ARGUMENTS ───────────────────────────────────────────────────
while [[ $# -gt 0 ]]; do
    case $1 in
        -t|--town)
            TOWN="$2"
            shift 2
            ;;
        -n|--npc)
            NPC="$2"
            shift 2
            ;;
        -w|--weather)
            WEATHER="$2"
            shift 2
            ;;
        -c|--ckpt)
            CKPT="$2"
            shift 2
            ;;
        -d|--debug)
            DEBUG=true
            shift
            ;;
        *)
            # Maintien de la compatibilité si le checkpoint est passé en premier argument sans flag
            if [ -z "$CKPT" ] && [[ "$1" != -* ]]; then
                CKPT="$1"
                shift
            else
                echo "Argument inconnu : $1"
                echo "Usage : $0 [-t|--town TownXX] [-n|--npc X] [-w|--weather X] [-c|--ckpt path] [-d|--debug]"
                exit 1
            fi
            ;;
    esac
done

mkdir -p /tmp/carla_pipeline_logs
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
    trap - EXIT INT TERM
    echo ""
    echo -e "${R}🛑 Arrêt en cours...${N}"
    for pidfile in "$PID_DIR"/*.pid; do
        [ -f "$pidfile" ] || continue
        pid=$(cat "$pidfile")
        kill -INT "-$pid" 2>/dev/null || kill -TERM "-$pid" 2>/dev/null
    done
    sleep 2
    killall -9 CarlaUE4-Linux-Shipping      2>/dev/null
    pkill -9 -f "CarlaUE4"                  2>/dev/null
    pkill -f "generate_traffic.py"          2>/dev/null
    pkill -f "carla_ros_bridge"             2>/dev/null
    pkill -f "prediction_node"              2>/dev/null
    pkill -f "map_visualization"            2>/dev/null
    pkill -f "planning_visualization"       2>/dev/null
    pkill -f "traffic_sign_node"            2>/dev/null
    pkill -f "rviz2"                        2>/dev/null
    rm -rf "$PID_DIR"
    echo -e "${G}✅ Tout arrêté.${N}"
}
trap cleanup EXIT INT TERM

if ! command -v gnome-terminal &> /dev/null; then
    echo -e "${R}Erreur : gnome-terminal requis${N}"; exit 1
fi

open_t() {
    local title="$1" name="$2" cmd="$3"
    if $DEBUG; then
        gnome-terminal --title="$title" -- bash -c "echo \$\$ > \"$PID_DIR/$name.pid\"; $cmd; exec bash"
    else
        (set -m; bash -c "$cmd" > "/tmp/carla_pipeline_logs/$name.log" 2>&1 & echo $! > "$PID_DIR/$name.pid")
    fi
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
echo -e "${C}  Configuration active :${N}"
echo -e "    - Ville      : $TOWN"
echo -e "    - Véhicules  : $NPC"
echo -e "    - Météo (ID) : $WEATHER"
[ -n "$CKPT" ] && echo -e "    - Checkpoint : $CKPT"
$DEBUG && echo -e "    - Mode       : DEBUG (gnome-terminal)"

# ─── LANCEMENT ──────────────────────────────────────────────────────────────
echo -e "\n${B}▶ [1/7]${N} CARLA Simulator ${C}(OffScreen)${N}"
open_t "CARLA Simulator" "t1" "cd \"$CARLA_PATH\" && ./CarlaUE4.sh -RenderOffScreen"
wait_bar 8 "Démarrage CARLA..."

echo -e "${B}▶ [2/7]${N} ROS2 Bridge ${C}($TOWN)${N}"
open_t "carla_ros_bridge" "t2" "$CARLA_ENV && $ROS_SOURCE && ros2 launch carla_ros_bridge carla_ros_bridge_with_example_ego_vehicle.launch.py town:='$TOWN'"
wait_bar 12 "Démarrage bridge..."

echo -e "${B}▶ [3/7]${N} Trafic NPC ${C}($NPC véhicules)${N}"
open_t "NPC Traffic" "t3" "cd \"$CARLA_PATH/PythonAPI/examples\" && source $HOME/miniconda3/etc/profile.d/conda.sh && conda activate carla_env && PYTHONPATH=\"$CARLA_EGG:\$PYTHONPATH\" python3 generate_traffic.py -n $NPC -w $WEATHER --safe --asynch"
wait_bar 3 "Spawn NPC..."

echo -e "${B}▶ [4/7]${N} Prediction node"
PRED_CMD="$ROS_SOURCE && ros2 run carla_prediction prediction_node --ros-args --params-file $WS/carla_prediction/config/prediction_params.yaml -p use_sim_time:=true"
if [ -n "$CKPT" ]; then
    PRED_CMD="$PRED_CMD -p model_ckpt:='$CKPT'"
fi
open_t "prediction_node" "t4" "$PRED_CMD"
wait_bar 2 "Chargement prediction node..."

echo -e "${B}▶ [5/7]${N} Map visualization"
open_t "carla_map_visualization" "t5" "$CARLA_ENV && $ROS_SOURCE && ros2 launch carla_map_visualization map_visualization.launch.py"
wait_bar 2 "Chargement map..."

echo -e "${B}▶ [6a/7]${N} Planning node"
open_t "carla_planning" "t6a" "$CARLA_ENV && $ROS_SOURCE && ros2 launch carla_planning planning_visualization.launch.py"
wait_bar 2 "Chargement planning..."

echo -e "${B}▶ [6b/8]${N} YOLO Detector Node"
open_t "yolo_detector" "t6b" "conda run -n CarlaPrediction_ros --no-capture-output bash -c '$ROS_SOURCE && python $WS/install/carla_planning/lib/python3.8/site-packages/carla_planning/yolo_detector_node.py'"
wait_bar 2 "Chargement YOLO..."

echo -e "${B}▶ [6c/8]${N} Traffic Light Specialist"
open_t "traffic_light" "t6c" "conda run -n CarlaPrediction_ros --no-capture-output bash -c '$ROS_SOURCE && python $WS/install/carla_planning/lib/python3.8/site-packages/carla_planning/traffic_light_node.py'"
wait_bar 1 "Chargement spécialiste feux..."

echo -e "${B}▶ [6d/9]${N} Speed Limit Specialist"
open_t "speed_limit" "t6d" "conda run -n CarlaPrediction_ros --no-capture-output bash -c '$ROS_SOURCE && python $WS/install/carla_planning/lib/python3.8/site-packages/carla_planning/speed_limit_node.py'"
wait_bar 1 "Chargement spécialiste vitesses..."

echo -e "${B}▶ [7/7]${N} RViz2"
sleep 4
open_t "RViz2" "t7" "source /opt/ros/galactic/setup.bash && ros2 run rviz2 rviz2 -d $HOME/Desktop/CarlaPrediction/configs/config-debug.rviz --ros-args -p use_sim_time:=true"

# ─── STATUT FINAL ───────────────────────────────────────────────────────────
echo ""
echo -e "  ${W}╔══════════════════════════════════════════╗${N}"
echo -e "  ${W}║${N}  ${G}✅ Pipeline opérationnel${N}                ${W}║${N}"
echo -e "  ${W}║${N}                                          ${W}║${N}"
echo -e "  ${W}║${N}  ${C}RViz — Fixed Frame :${N} map              ${W}  ║${N}"
echo -e "  ${W}║${N}  Add → By topic :                       ${W} ║${N}"
echo -e "  ${W}║${N}    /carla/map_visualization  MarkerArray ${W}║${N}"
echo -e "  ${W}║${N}    /carla/prediction/...     MarkerArray ${W}║${N}"
echo -e "  ${W}║${N}    /carla/planning/...       MarkerArray ${W}║${N}"
echo -e "  ${W}║${N}                                          ${W}║${N}"
echo -e "  ${W}║${N}  ${R}⏎  Entrée pour tout arrêter${N}             ${W}║${N}"
echo -e "  ${W}╚══════════════════════════════════════════╝${N}"
echo ""
read -r