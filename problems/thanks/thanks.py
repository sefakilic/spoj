t, g = raw_input().split()

for i in xrange(int(t)):
    s, gb = raw_input().split()
    print "Welcome %s%s" % (s, ", ;)" if g!=gb else "")
