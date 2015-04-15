def cmp(stra, strb, alph):
    if stra == "" and strb == "":
        return '='
    a = stra[0]
    b = strb[0]
    if alph.index(a) < alph.index(b):
        return '<'
    elif alph.index(a) > alph.index(b):
        return '>'
    else:
        return cmp(stra[1:], strb[1:], alph)

t = int(raw_input())
for _ in range(t):
    alph = raw_input().strip()
    stra = raw_input().strip()
    strb = raw_input().strip()
    print cmp(stra, strb, alph)
    
