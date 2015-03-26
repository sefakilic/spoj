def cards(n):
    return (n*(n+1) + (n-1)*n/2) % 1000007

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        n = int(raw_input())
        print cards(n)
