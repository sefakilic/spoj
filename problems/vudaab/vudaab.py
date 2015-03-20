T = int(raw_input())
while T > 0:
    T -= 1
    a,b,c = map(int, raw_input().split())
    if (b-a == c-b):
        print c + (c-b)
    else:
        print c * (c/b)
