
from math import log

def atwo(n):
    """If n is power of two, just print it. Otherwise print it
    with the closest power of two"""
    if n == 0:
        print 0, 1
        return
    
    logn = int(log(n,2))
    if 2**logn == n:
        print n
    else:
        print n, 2**(logn+1)
if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        n = int(raw_input())
        atwo(n)
    
