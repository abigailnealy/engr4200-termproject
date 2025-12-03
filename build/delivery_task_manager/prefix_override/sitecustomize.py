import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yoga7i/engr4200-termproject/install/delivery_task_manager'
