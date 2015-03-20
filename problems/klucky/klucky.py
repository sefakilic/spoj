L = [5, 25, 30]
a = 3
while len(L) <= 8000:
    x = 5**a
    l = len(L)
    L.append(x)
    for i in xrange(l):
        L.append(L[i]+x)
    a += 1

T = int(raw_input())
while T > 0:
    T -= 1
    N = int(raw_input())
    print L[N-1]
    
