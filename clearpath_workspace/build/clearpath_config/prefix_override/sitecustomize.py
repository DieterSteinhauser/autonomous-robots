import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/newton/autonomous-robots/clearpath_workspace/install/clearpath_config'
