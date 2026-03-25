import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ivdc/igvc2025/nav_gps_ws/install/swri_cli_tools'
