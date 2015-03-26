# got TLE
def nimbus():
    h, w = map(int, raw_input().split())
    dp = map(int, raw_input().split())
    for i in xrange(h-1):
        row = map(int, raw_input().split())
        for j in xrange(w):
            row[j] += max(dp[j-1] if j>0 else 0,
                          dp[j],
                          dp[j+1] if j+1<w else 0)
        dp = row[:]
    print max(dp)
    

if __name__ == '__main__':
    T = int(raw_input())
    for i in xrange(T):
        nimbus()
