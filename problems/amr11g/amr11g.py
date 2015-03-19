T = int(raw_input())

while T>0:
    T -= 1
    S = raw_input().strip()
    print "You shall not pass!" if 'D' in S else "Possible"
    
