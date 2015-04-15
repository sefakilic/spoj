n = int(input())
for i in range(n):
    sa, sb = input().split()
    total = int(sa[::-1]) + int(sb[::-1])
    print("Case %d#: %d" % (i+1, int(('%s' % total)[::-1])))
