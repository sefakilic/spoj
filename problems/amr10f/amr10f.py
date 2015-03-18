T = int(raw_input())
while T > 0:
    T -= 1
    N, A, D = map(int, raw_input().split())
    print N*A + D*N*(N-1)/2
