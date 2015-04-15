t = int(raw_input())
for i in xrange(t):
    n = int(raw_input())
    if n==1:
        print 1
        continue
    
    # print all digits
    x = pow(5,n-1)
    x = str(x)
    print '0.%s' % ('0'*(n-1-len(x)) + x)
