import string

n = int(raw_input())
for _ in xrange(n):
    xs = raw_input().strip()
    print len([x for x in xs if x.lower() in "aeiouy"]),
    print len([x for x in xs if x.isalpha() and x.lower() not in "aeiouy"])
