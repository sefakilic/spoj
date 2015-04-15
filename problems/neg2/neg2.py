def neg2(n):
    if n==0:
        return 0
    if n==1:
        return '1'
    if n==-1:
        return '11'

    if n>0:
        return neg2(-(n/2)) + str(n%2)
    if n<0:
        return neg2((-n+1)/2) + str(-n%2)

print neg2(int(raw_input()))
