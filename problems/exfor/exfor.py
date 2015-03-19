T = int(raw_input())

while T>0:
    T -= 1
    X = map(int, raw_input().split())
    res = 0
    for i in xrange(10):
        for j in xrange(i+1,10):
            res = res ^ (X[i] or X[j])
    for i in xrange(10):
        for j in xrange(i+1,10):
            for k in xrange(j+1,10):
                res = res ^ (X[i] or X[j] or X[k])
    print res


