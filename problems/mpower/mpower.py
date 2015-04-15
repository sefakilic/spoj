if __name__ == '__main__':
    n = int(raw_input())
    for i in xrange(n):
        a, b, c = map(int, raw_input().split())
        print pow(a,b,c)
