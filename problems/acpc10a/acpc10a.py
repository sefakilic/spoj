def what_next(a, b, c):
    if c-b == b-a:
        print 'AP', 2*c-b
    else:
        print 'GP', c**2/b

if __name__ == '__main__':
    while True:
        a,b,c = map(int, raw_input().split())
        if a == b == c == 0:
            break
        what_next(a, b, c)

        
