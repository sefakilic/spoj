T = int(raw_input())
while T > 0:
    T -= 1
    N = int(raw_input())
    words = raw_input().split()
    eng_words = [w for w in words if not w.startswith('#')]
    if not eng_words:
        print " ".join(words)
    else:
        eng_word = eng_words[0]
        index = words.index(eng_word)
        for x in xrange(index+1, len(words)):
            print words[x],
        print words[index],
        for x in xrange(index):
            print words[x],
        print ""
            
            
