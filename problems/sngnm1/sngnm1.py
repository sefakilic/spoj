
t = int(raw_input())
for _ in range(t):
    s = raw_input().strip()
    num = int(s)
    for d in s:
        if d != '0' and num%int(d) != 0:
            print "no"
            break
    else:
        print "yes"
    
