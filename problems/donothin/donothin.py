while True:
    N, M = map(int, raw_input().split())
    if N == M == -1: break
    chapters = map(int, raw_input().split())
    length = 0
    for i in xrange(N):
        length += (N-i)*chapters[i]
    length *= M
    print length

