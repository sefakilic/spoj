"""Print all multiples of x between 1 to N."""

if __name__ == '__main__':
    t = int(raw_input())

    for i in xrange(t):
        a, b = map(int, raw_input().split())
        x = 1
        print "Case %d:" % (i+1),
        while x*a <= b:
            print x*a,
            x += 1
        print ""
