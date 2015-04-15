def hpynos(n):
    hist = []
    while n>1:
        n = sum(map(lambda c: int(c)**2, str(n)))
        if n in hist:
            return -1
        hist.append(n)
    return len(hist)


if __name__ == '__main__':
    N = int(raw_input())
    print hpynos(N)
