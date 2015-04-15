
def lastdig(a,b):
    a = a%10
    if a == 0:
        return 0
    if b == 0:
        return 1
    if a == 0:
        return 0
    elif a == 1:
        return 1
    elif a == 2:
        return [6, 2, 4, 8][b%4]
    elif a == 3:
        return [1, 3, 9, 7][b%4]
    elif a == 4:
        return [6, 4][b%2]
    elif a == 5:
        return 5
    elif a == 6:
        return 6
    elif a == 7:
        return [1, 7, 9, 3][b%4]
    elif a == 8:
        return [6, 8, 4, 2][b%4]
    else: # a=9
        return [1, 9][b%2]


if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        a, b = map(int, raw_input().split())
        print lastdig(a,b)
