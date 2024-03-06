import sys

string = input()

for st in string:

    if 'A'<=st and st<='C':
        print(chr(ord('Z') - ord('C') + ord(st)), end="")
    else:
        print(chr(ord(st)-3), end="")