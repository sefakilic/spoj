def modpow(a,b,c):
    if b == 0:
        return 1%c
    if b == 1:
        return a%c

    half = modpow(a, b/2, c)
    if b%2 == 1:
        return (half*half*a)%c

    return (half*half)%c


if __name__ == '__main__':
    x = int(raw_input())
    for i in xrange(x):
        a, b, c = map(int, raw_input().split())
        print modpow(a, b, c)

