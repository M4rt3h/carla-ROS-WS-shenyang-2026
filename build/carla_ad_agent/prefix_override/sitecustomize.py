import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/martin/Desktop/Stage/Projet/ws_carla_ros/install/carla_ad_agent'
