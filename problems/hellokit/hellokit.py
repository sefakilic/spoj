import sys

def kitty(w, k):
    s = ''
    w2 = w*k
    for i in xrange(len(w)):
        s += (w2[i:] + w2[:i]) + '\n'
    return s

if __name__ == '__main__':
    while True:
        s = raw_input().strip()
        if s == '.': break
        w, k = s.split()
        sys.stdout.write(kitty(w, int(k)))
