import string

testCases = string.atoi(raw_input())
while testCases > 0:
    testCases -= 1
    line = raw_input()
    x, y, mod = [int(i) for i in line.split(' ')]
    n = x + y
    if x > y:
        k = x
    else:
        k = y
    result = 1
    i = n
    while i > k:
        result = result * i
        i -= 1
    i = n-k
    while i > 1:
        result = result / i
        i -= 1

    print result%mod
