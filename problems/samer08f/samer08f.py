def num_squares(n):
    return sum((n-i+1)**2 for i in xrange(1, n+1))

if __name__ == '__main__':
    while True:
        n = int(raw_input())
        if n==0: break
        print num_squares(n)
