if __name__ == '__main__':
    n = int(raw_input())
    for i in xrange(n):
        v, t = map(int, raw_input().split())
        print "Case #%d: %d" % (i+1, v * t)
