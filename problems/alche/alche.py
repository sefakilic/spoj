while True:
    iron, water = map(int, raw_input().split())
    if iron == water == -1:
        break
    if iron%1000 == 0 and water%37 == 0 and iron/1000 == water/37:
        print 'Y'
    else:
        print 'N'
