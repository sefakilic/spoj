if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        lst = map(int, raw_input().split())
        print "Case %d: %s" % (i+1, " ".join(map(str, sorted(lst))))
