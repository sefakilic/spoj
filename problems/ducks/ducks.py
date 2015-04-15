t = int(raw_input())
for _ in xrange(t):
    s = ''.join([c for c in raw_input().strip() if c != '.']*2)
    if "Ducky" in s:
        print "DUCKY IS HERE!"
    else:
        print "NO DUCKY!"
    
