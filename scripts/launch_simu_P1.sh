#!/bin/bash

# ─── CHEMINS & CONFIG ───────────────────────────────────────────────────────
CARLA_DIR="$HOME/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13"
CARLA_EGG="$CARLA_DIR/PythonAPI/carla/dist/carla-0.9.13-py3.7-linux-x86_64.egg"
TRAFFIC_DIR="$CARLA_DIR/PythonAPI/examples"
WS_DIR="$HOME/Desktop/Stage/Projet/ws_carla_ros"
OBJECTS_FILE="$WS_DIR/voiture_legere.json"
CONDA_ENV="carla_env"

WAIT_T1=15
WAIT_T2=25
WAIT_T3=5
WAIT_T4=5

PID_DIR="/tmp/carla_ros_launch"
mkdir -p "$PID_DIR"
rm -f "$PID_DIR"/*.pid  # nettoie les anciens PIDs

# ─── NETTOYAGE ──────────────────────────────────────────────────────────────
cleanup() {
    echo ""
    echo "🛑 Arrêt en cours..."

    # Kill via PIDs enregistrés
    for pidfile in "$PID_DIR"/*.pid; do
        [ -f "$pidfile" ] || continue
        pid=$(cat "$pidfile")
        pgid=$(ps -o pgid= -p "$pid" 2>/dev/null | tr -d ' ')
        [ -n "$pgid" ] && kill -TERM -"$pgid" 2>/dev/null
        kill -TERM "$pid" 2>/dev/null
    done
    sleep 2

    # Filet de sécurité : pkill sur les process connus
    pkill -f "CarlaUE4"             2>/dev/null
    pkill -f "carla_ros_bridge"     2>/dev/null
    pkill -f "generate_traffic"     2>/dev/null
    pkill -f "carla_stanley_pid"    2>/dev/null
    pkill -f "trajectory_node"      2>/dev/null
    pkill -f "carla_pid_control"    2>/dev/null

    rm -rf "$PID_DIR"
    echo "✅ Tout arrêté."
}

trap cleanup EXIT INT TERM

# ─── DÉTECTION CONDA ────────────────────────────────────────────────────────
find_conda() {
    for p in "$HOME/miniconda3" "$HOME/anaconda3" "/opt/conda" "/opt/miniconda3" "/opt/anaconda3"; do
        [ -f "$p/etc/profile.d/conda.sh" ] && { echo "$p"; return; }
    done
    echo ""
}
CONDA_BASE=$(find_conda)
[ -z "$CONDA_BASE" ] && { echo "❌ Conda introuvable."; exit 1; }
CONDA_SH="$CONDA_BASE/etc/profile.d/conda.sh"

# ─── DÉTECTION TERMINAL ─────────────────────────────────────────────────────
find_terminal() {
    for t in gnome-terminal konsole xfce4-terminal xterm lxterminal mate-terminal tilix; do
        command -v "$t" &>/dev/null && { echo "$t"; return; }
    done
    echo ""
}
TERM_APP=$(find_terminal)
[ -z "$TERM_APP" ] && { echo "❌ Aucun émulateur de terminal détecté."; exit 1; }

# Ouvre un terminal, enregistre le PID de la commande dans $PID_DIR/$name.pid
open_terminal() {
    local title="$1"
    local name="$2"
    local cmd="$3"
    local full_cmd="echo \$\$ > \"$PID_DIR/$name.pid\"; $cmd"
    case "$TERM_APP" in
        gnome-terminal) gnome-terminal --title="$title" -- bash -c "$full_cmd; echo; echo '[Terminé]'; read" ;;
        konsole)        konsole --title "$title" -e bash -c "$full_cmd; echo; read" ;;
        xfce4-terminal) xfce4-terminal --title="$title" -e "bash -c '$full_cmd; echo; read'" ;;
        xterm)          xterm -title "$title" -e bash -c "$full_cmd; echo; read" ;;
        lxterminal)     lxterminal --title="$title" -e "bash -c '$full_cmd; echo; read'" ;;
        mate-terminal)  mate-terminal --title="$title" -e "bash -c '$full_cmd; echo; read'" ;;
        tilix)          tilix -t "$title" -e bash -c "$full_cmd; echo; read" ;;
    esac
}

# ─── HEADER ─────────────────────────────────────────────────────────────────
echo ""
echo "╔══════════════════════════════════════╗"
echo "║   LANCEMENT CARLA 0.9.13 + ROS2      ║"
echo "╚══════════════════════════════════════╝"
echo ""

# ─── T1 : CARLA ─────────────────────────────────────────────────────────────
echo "▶ [T1] CARLA simulator (OffScreen)..."
CMD_T1="cd \"$CARLA_DIR\" && ./CarlaUE4.sh -RenderOffScreen"
open_terminal "T1 | CARLA Simulator" "t1" "$CMD_T1"
echo "⏳ Attente ${WAIT_T1}s..."; sleep $WAIT_T1

# ─── T2 : ROS BRIDGE ────────────────────────────────────────────────────────
echo "▶ [T2] ROS2 bridge..."
CMD_T2="cd \"$WS_DIR\" \
  && source install/setup.bash \
  && PYTHONPATH=\"$CARLA_EGG:\$PYTHONPATH\" \
     ros2 launch carla_ros_bridge carla_ros_bridge_with_example_ego_vehicle.launch.py \
     objects_definition_file:=$OBJECTS_FILE town:='Town04'"
open_terminal "T2 | ROS Bridge" "t2" "$CMD_T2"
echo "⏳ Attente ${WAIT_T2}s..."; sleep $WAIT_T2

# ─── T3 : TRAFIC ────────────────────────────────────────────────────────────
echo "▶ [T3] Trafic (PNJ)..."
CMD_T3="source \"$CONDA_SH\" && conda activate $CONDA_ENV \
  && cd \"$TRAFFIC_DIR\" \
  && PYTHONPATH=\"$CARLA_EGG:\$PYTHONPATH\" \
     python3 generate_traffic.py -n 50 -w 10 --safe --asynch"
open_terminal "T3 | PNJ Traffic" "t3" "$CMD_T3"
echo "⏳ Attente ${WAIT_T3}s..."; sleep $WAIT_T3

# ─── T4 : CONTRÔLE ──────────────────────────────────────────────────────────
echo "▶ [T4] Contrôle (Stanley PID)..."
CMD_T4="cd \"$WS_DIR\" && source install/setup.bash \
  && ros2 launch carla_pid_control carla_stanley_pid_control.launch.py"
open_terminal "T4 | Contrôle" "t4" "$CMD_T4"
echo "⏳ Attente ${WAIT_T4}s..."; sleep $WAIT_T4

# ─── T5 : MODE AUTONOME ─────────────────────────────────────────────────────
echo "▶ [T5] Mode autonome (trajectory_node)..."
CMD_T5="source \"$CONDA_SH\" && conda activate $CONDA_ENV \
  && cd \"$WS_DIR\" \
  && colcon build --packages-select carla_interface \
  && source install/setup.bash \
  && ros2 run carla_interface trajectory_node"
open_terminal "T5 | Mode Autonome" "t5" "$CMD_T5"

# ─── ATTENTE ARRÊT ──────────────────────────────────────────────────────────
echo ""
echo "✅ Les 5 terminaux sont lancés."
echo ""
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "  Appuie sur Entrée pour tout arrêter"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
read -r
