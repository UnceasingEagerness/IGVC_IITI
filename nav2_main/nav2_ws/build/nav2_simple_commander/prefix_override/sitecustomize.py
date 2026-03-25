import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ivdc/igvc2025/nav2_main/nav2_ws/install/nav2_simple_commander'
