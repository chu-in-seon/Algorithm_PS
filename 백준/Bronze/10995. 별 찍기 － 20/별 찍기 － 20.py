import sys
Number = int(input())

for i in range(0, Number, 1):
    for j in range(0 , Number, 1):
        if i % 2 == 0:
            sys.stdout.write('* ')
        elif i % 2 == 1:
            sys.stdout.write(' *')
    print()