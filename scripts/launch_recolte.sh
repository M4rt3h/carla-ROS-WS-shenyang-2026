#!/bin/bash

# ─── CHEMINS ────────────────────────────────────────────────────────────────
CARLA_DIR="$HOME/Desktop/Stage/Documents fournis/Carla/CARLA_0.9.13"
DATA_DIR="$HOME/Desktop/Stage/Documents fournis"
CONDA_ENV="carla_env"
PYTHON_SCRIPT="carla_demo16.py"
NB_VEHICLES=120
WAIT_CARLA=15  # secondes avant de lancer le script python

# ─── DÉTECTION CONDA ────────────────────────────────────────────────────────
find_conda() {
    for p in "$HOME/miniconda3" "$HOME/anaconda3" "/opt/conda" "/opt/miniconda3" "/opt/anaconda3"; do
        [ -f "$p/etc/profile.d/conda.sh" ] && { echo "$p"; return; }
    done
    echo ""
}

CONDA_BASE=$(find_conda)
if [ -z "$CONDA_BASE" ]; then
    echo "❌ Conda introuvable. Vérifie le chemin dans le script."
    exit 1
fi
CONDA_SH="$CONDA_BASE/etc/profile.d/conda.sh"

# ─── DÉTECTION TERMINAL ─────────────────────────────────────────────────────
find_terminal() {
    for t in gnome-terminal konsole xfce4-terminal xterm lxterminal mate-terminal tilix; do
        command -v "$t" &>/dev/null && { echo "$t"; return; }
    done
    echo ""
}

TERM_APP=$(find_terminal)
if [ -z "$TERM_APP" ]; then
    echo "❌ Aucun émulateur de terminal détecté."
    exit 1
fi

# Lance une commande dans un nouveau terminal (reste ouvert après)
open_terminal() {
    local title="$1"
    local cmd="$2"
    local keep="bash -c '$cmd; echo; echo \"[Terminé — appuie sur Entrée]\"; read'"
    case "$TERM_APP" in
        gnome-terminal) gnome-terminal --title="$title" -- bash -c "$cmd; echo; echo '[Terminé — appuie sur Entrée]'; read" ;;
        konsole)        konsole --title "$title" -e bash -c "$cmd; echo; echo '[Terminé — appuie sur Entrée]'; read" ;;
        xfce4-terminal) xfce4-terminal --title="$title" -e "bash -c '$cmd; echo; echo [Terminé]; read'" ;;
        xterm)          xterm -title "$title" -e bash -c "$cmd; echo; echo '[Terminé — appuie sur Entrée]'; read" ;;
        lxterminal)     lxterminal --title="$title" -e "bash -c '$cmd; echo; read'" ;;
        mate-terminal)  mate-terminal --title="$title" -e "bash -c '$cmd; echo; read'" ;;
        tilix)          tilix -t "$title" -e bash -c "$cmd; echo; read" ;;
    esac
}

# ─── OPTIONS LANCEMENT ──────────────────────────────────────────────────────
echo ""
echo "╔══════════════════════════════╗"
echo "║     LANCEMENT CARLA 0.9.13   ║"
echo "║    marche pas mais pas utile ║"
echo "╚══════════════════════════════╝"
echo ""
echo "Mode de rendu :"
echo "  1) OffScreen  (recommandé, sans fenêtre CARLA)"
echo "  2) Avec rendu (fenêtre CARLA visible)"
read -rp "Choix [1/2] (défaut: 1) : " MODE
MODE=${MODE:-1}

GPU=${GPU:-2}

# ─── CONSTRUCTION DES ARGS CARLA ────────────────────────────────────────────
CARLA_ARGS=""
[ "$MODE" = "1" ] && CARLA_ARGS="-RenderOffScreen"

echo ""
echo "▶ Terminal 1 : CARLA  ($CARLA_ARGS)"
echo "▶ Terminal 2 : Script python dans ${WAIT_CARLA}s"
echo ""

# ─── TERMINAL 1 : CARLA ─────────────────────────────────────────────────────
CMD_CARLA="source \"$CONDA_SH\" && conda activate $CONDA_ENV && cd \"$CARLA_DIR\" && ./CarlaUE4.sh $CARLA_ARGS"
open_terminal "CARLA Simulator" "$CMD_CARLA"

# ─── ATTENTE ────────────────────────────────────────────────────────────────
echo "⏳ Attente de ${WAIT_CARLA}s pour que CARLA démarre..."
sleep $WAIT_CARLA

# ─── TERMINAL 2 : PYTHON ────────────────────────────────────────────────────
CMD_PY="source \"$CONDA_SH\" && conda activate $CONDA_ENV && cd \"$DATA_DIR\" && python $PYTHON_SCRIPT -n $NB_VEHICLES"
open_terminal "CARLA Data Collection" "$CMD_PY"

echo "✅ Les deux terminaux sont lancés."
