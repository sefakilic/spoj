def girls_boys(g, b):
    s,l = min(g, b), max(g,b)

    if s == 0: return l

    regularity = (l * 1.0) / (s+1)
    if int(regularity) * (s+1) != l:
        regularity += 1

    return int(regularity)

if __name__ == '__main__':
    while True:
        a, b = map(int, raw_input().split())
        if a == b == -1: break
        print girls_boys(a, b)
