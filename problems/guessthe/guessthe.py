factors = {
    2: [2],
    3: [3],
    4: [2,2],
    5: [5],
    6: [2,3],
    7: [7],
    8: [2,2,2],
    9: [3,3],
    10: [2,5],
    11: [11],
    12: [2,2,3],
    13: [13],
    14: [2,7],
    15: [3,5],
    16: [2,2,2,2],
    17: [17],
    18: [2,3,3],
    19: [19],
    20: [2,2,5]
}

def guessthe(s):
    num = []
    for i in xrange(2, len(s)+1):
        if s[i-1] == 'N': continue
        # if s[i]=Y, then num is divisible by i
        for f in factors[i]:
            while num.count(f) < factors[i].count(f):
                num.append(f)
    num = reduce(lambda x,y: x*y, num, 1)

    # check if valid
    for i in xrange(1, len(s)+1):
        if ((s[i-1] == 'Y' and num % i != 0) or
            (s[i-1] == 'N' and num % i == 0)):
            print -1
            break
    else:
        print num

    

if __name__ == '__main__':
    while True:
        s = raw_input().strip()
        if s == '*': break
        guessthe(s)
