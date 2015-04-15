def wordcnt(line):
    words = line.strip().split()
    lens = map(len, words)
    i = 0
    max_consec = 0
    while i < len(lens):
        consec = 0
        l = lens[i]
        while i<len(lens) and l==lens[i]:
            i += 1
            consec += 1
        max_consec = max(max_consec, consec)

    return max_consec
        
if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        print wordcnt(raw_input())
