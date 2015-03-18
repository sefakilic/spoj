def fac(n):
    if n==0: return 1
    return n * fac(n-1)

def choose(n, k):
    return fac(n) / (fac(n-k) * fac(k))

if __name__ == '__main__':
    while True:
        A, B = map(int, raw_input().split())
        if A == -1 and B == -1:
            break

        res = choose(A+B ,A)
        print "%d+%d%s%d" % (A, B, "=" if A+B==res else "!=", A+B)
