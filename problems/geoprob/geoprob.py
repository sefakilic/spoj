if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        b,c,d = map(int, raw_input().split())
        print 2*c-b-d
