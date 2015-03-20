t = int(raw_input())
for _ in xrange(t):
    a, b, c = map(int, raw_input().split())
    diff = b-a
    print 
sum([a+i*diff for i in xrange(c)])
    
