def main():
    while True:
        try:
            k, n = map(int, raw_input().split())
            xs = map(int, raw_input().split())
            for _ in xrange(n):
                xs = map(lambda (x,y): y-x, zip(xs, xs[1:]))
            print ' '.join(map(str, xs))
        except EOFError:
            break

if __name__ == '__main__':
    main()
