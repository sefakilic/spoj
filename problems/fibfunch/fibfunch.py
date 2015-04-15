
def fib(n):
    if (n <= 0):
        return 0
    else:
        return fib2(n-1)[1];

# Returns a tuple (F(n), F(n+1))
def fib2(n):
    if (n <= 0):
        return [0, 1]
    else:
        ab = fib2(n/2)
        a = ab[0]
        b = ab[1]
        c = a * (2 * b - a)
        d = b * b + a * a
        if (n % 2 == 0):
            return [c, d]
        else:
            return [d, c + d]

def fibofun(a, b, n, m):
    return (a * fib(n) + b * fib(n+1) - b) % m

def main():
    t = int(raw_input())
    while t > 0:
        t -= 1
        a, b, n, m = map(int, raw_input().split())
        print fibofun(a, b, n, m)

if __name__ == '__main__':
    main()
