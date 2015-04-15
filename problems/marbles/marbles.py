def marbles(n,k):
    x = 1
    if k-1>n-k:
        for i in xrange(n-1, k-1, -1):
            x *= i
        for i in xrange(n-k, 1, -1):
            x /= i
    else:
        for i in xrange(n-1, n-k, -1):
            x *= i
        for i in xrange(k-1, 1, -1):
            x /= i
    return x

        
if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        n,k = raw_input().split()
        print marbles(int(n), int(k))
