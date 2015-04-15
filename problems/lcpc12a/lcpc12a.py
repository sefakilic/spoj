def johnny(n):
    x = 0
    y = 0
    for i, c in enumerate(n):
        if c in "24680":
            x += (i+1)
        else:
            y += (i+1)
    return x, y

n = int(raw_input())
for i in xrange(n):
    x, y = johnny(raw_input().strip())
    print "%d. %d %d" % (i+1, x, y)
