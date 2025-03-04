import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/boole/autonomous-robots/HW3/install/ar_hw3'
