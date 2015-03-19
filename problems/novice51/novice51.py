def f(n):
    cnt = 0
    while n > 0:
        n = n - 1 if n % 2 else n / 2
        cnt += 1
    return cnt

T = int(raw_input())
while T > 0:
    T -= 1
    N = int(raw_input())
    print "Aayush" if f(N) % 2 else "Akash"
