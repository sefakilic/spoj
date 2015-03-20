def machula(s):
    tokens = s.split()
    a = tokens[0]
    b = tokens[2]
    c = tokens[4]

    if "machula" in a:
        a = int(c) - int(b)
    elif "machula" in b:
        b = int(c) - int(a)
    elif "machula" in c:
        c = int(a) + int(b)

    print a, '+', b, '=', c

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        raw_input()
        s = raw_input().strip()
        machula(s)
        
        
