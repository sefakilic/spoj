def digsum(n):
    if n<10:
        return n
    return digsum(digsum(n/10) + n%10)

t = int(raw_input())
for _ in range(t):
    n = int(raw_input())
    print digsum(n)
