translation = {'8': 'ate',
               'w8': 'wait',
               'gr8': 'great',
               '4': 'for',
               'b4': 'before'}

T = int(raw_input())
while T > 0:
    T -= 1
    words = raw_input().split(' ')
    words = map(lambda x: translation.get(x, x), words)
    print " ".join(words)
