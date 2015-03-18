if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        n, s = raw_input().split()
        n = int(n)-1
        s = s[:n] + s[n+1:]
        print i+1, s
    
