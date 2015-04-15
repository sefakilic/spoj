MEMOIZE = {}

def permut(N, k):
    # given a list of N numbers return the number of permutations with exactly k
    # inversions
    if (N,k) in MEMOIZE:
        return MEMOIZE[(N,k)]
    if k < 0: return 0
    if k == 0: return 1
    total = 0
    for i in xrange(N):
        total += permut(N-1, k-i)
    MEMOIZE[(N,k)] = total
    return total

if __name__ == '__main__':
    T = int(raw_input())
    for i in xrange(T):
        N, K = map(int, raw_input().split())
        print permut(N, K)
