def fac(n):
    return 1 if n==0 else n*fac(n-1)
for _ in range(int(raw_input())):
    a,b = map(int, raw_input().split())
    print fac(a)/fac(b)


