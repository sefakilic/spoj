
def main():
    t = int(raw_input())
    for i in xrange(t):
        a, b, c = map(float, raw_input().split())
        print "Case %d:" % (i+1),
        if c-b == b-a:
            if c/b == b/a:
                print "Both"
            else:
                print "Arithmetic Progression"
        elif c/b == b/a:
            print "Geometric Progression"
        else:
            print "None"

if __name__ == '__main__':
    main()
