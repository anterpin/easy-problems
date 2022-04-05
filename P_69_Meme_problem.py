
def get_type_size(type):
    if type == 'int':
        return 4
    if 'long' in type:
        return 8
    if 'char' in type or 'bool' in type:
        return 1
    if 'short' in type:
        return 2
    raise(f'Unknown type {type}')

import re
line = input()
m = re.match(r'^(\w+)\s?(\w+)? (\w+)\[(\w+)\];*',line)
type = m.group(1)
if m.group(2) is not None:
    type += " " + m.group(2)
name = m.group(3)
size = eval(m.group(4))
print(size*get_type_size(type))