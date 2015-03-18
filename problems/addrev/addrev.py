"""http://www.spoj.com/problems/ADDREV/"""

n = int(raw_input())
for i in xrange(n):
    sa, sb = raw_input().split()
    total = int(sa[::-1]) + int(sb[::-1])
    print int(('%s' % total)[::-1])
    
