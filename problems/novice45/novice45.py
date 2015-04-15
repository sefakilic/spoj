import sys
sys.setrecursionlimit(100000)

memo = {}
def novice(n, k):
    if n < 0:  return 0
    if n == 0: return 1
    if k == 0: return 0
    if k == 1: return 1
    if (n, k) not in memo:
        memo[(n, k)] = (novice(n, k-1) + novice(n-k, k)) % 1000000007
    return memo[(n,k)]

if __name__ == '__main__':
    t = int(raw_input())
    while t>0:
        t -= 1
        a, b = map(int, raw_input().split())
        print novice(a, b)
