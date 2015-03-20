
"""
f(1) = 2
f(2) = 3
f(3) = 5
f(4) = 8
..

They look like Fibonacci numbers.

Sum of Fibonacci numbers:
\sum_{i=1}^n F(i) = F(n+2)-1
"""

MEMO = {}
def fibonacci_fast(n, m):
    """
    Fibonacci mod m.
    F(2k)   = F(k) * [2F(k+1) - F(k)]
    F(2k+1) = F(k+1)**2 + F(k)**2
    """
    if n not in MEMO:
        a = fibonacci_fast(n/2, m)
        b = fibonacci_fast(n/2+1, m)
        if n%2 == 0: # n = 2k
            MEMO[n] = (a*(2*b-a))
        else:
            MEMO[n] = (a**2 + b**2)
        while MEMO[n] < 0:
            MEMO[n] += m
    return MEMO[n]%m

def main():
    t = int(raw_input())
    for _ in range(t):
        global MEMO
        MEMO = {1: 1, 2: 1}     # reset dictionary
        n, m = map(int, raw_input().split())
        res = (fibonacci_fast(n+4, m) - 3)
        while res < 0:
            res += m
        print res % m

if __name__ == '__main__':
    main()
