while True:
    sides = sorted( map(int, raw_input().split()) )
    if sides[0] == sides[1] == sides[2] == 0:
        break
    if sides[0]**2 + sides[1]**2 == sides[2]**2:
        print 'right'
    else:
        print 'wrong'

