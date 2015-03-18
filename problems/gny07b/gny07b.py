if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        n, unit = raw_input().split()
        n = float(n)

        print i+1, 
        if unit=='kg':
            print '%.4f lb' % (n*2.2046)
        elif unit=='l':
            print '%.4f g' % (n*0.2642)
        elif unit=='lb':
            print '%.4f kg' % (n*0.4536)
        elif unit=='g':
            print '%.4f l' % (n*3.7854)
