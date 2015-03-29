t = int(raw_input())
for i in xrange(t):
    wds = raw_input().split()
    print " ".join(wd for wd in wds[::-1])
