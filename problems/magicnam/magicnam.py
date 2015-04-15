t = int(raw_input())

for i in xrange(t):
    s = raw_input().strip()
    print "YES" if s == ''.join(s[::-1]) else "NO"
