def fac(n):
    return (1 if n == 0 else n*fac(n-1))

def choose(n, k):
    return fac(n) / (fac(n-k) * fac(k))

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        n, k = map(int, raw_input().split())
        print choose(n, k)
