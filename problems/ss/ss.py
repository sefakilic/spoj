t = int(raw_input())
for _ in range(t):
    a, b = raw_input().split()
    print '%d %d' % (int(a.replace('6','5')) + int(b.replace('6', '5')),
                     int(a.replace('5','6')) + int(b.replace('5', '6')))
    
    
