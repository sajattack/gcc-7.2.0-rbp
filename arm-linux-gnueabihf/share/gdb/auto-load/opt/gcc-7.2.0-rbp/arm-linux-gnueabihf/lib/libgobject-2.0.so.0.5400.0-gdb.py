import sys
import gdb

# Update module path.
dir_ = '/opt/gcc-7.2.0-rbp/arm-linux-gnueabihf/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from gobject_gdb import register
register (gdb.current_objfile ())
