
def count_overlapping(s,t):
    cnt = 0
    last_index = -1
    while True:
        last_index = s.find(t, last_index+1)
        if last_index == -1:
            break
        else:
            cnt += 1
    return cnt

def count_triples(seq):
    triplets = ['TTT', 'TTH', 'THT', 'THH', 'HTT', 'HTH', 'HHT', 'HHH']
    counts = [count_overlapping(seq,t) for t in triplets]
    return counts


if __name__ == '__main__':
    p = int(raw_input())
    for i in xrange(p):
        n = int(raw_input())
        seq = raw_input().strip()
        print n,
        print ' '.join(map(str, count_triples(seq)))
