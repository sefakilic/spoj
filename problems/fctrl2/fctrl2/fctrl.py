def fact(x):
    if x == 0: return 1
    return reduce(lambda x,y: x*y, xrange(1, x+1), 1)

t = int(raw_input())

for i in xrange(t):
    n = int(raw_input())
    print fact(n)
