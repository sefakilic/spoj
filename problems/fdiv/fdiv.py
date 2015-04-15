if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        a,b = map(int, raw_input().split())
        print a/b, a%b
        
