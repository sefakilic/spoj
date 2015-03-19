T = int(raw_input())

while T > 0:
    T -= 1
    N = int(raw_input())
    cnt = 0
    while N > 0:
        cnt += N % 2
        N /= 2
    print cnt
