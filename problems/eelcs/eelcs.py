def lcsq(s, t):
    """
    http://en.wikipedia.org/wiki/Longest_common_subsequence_problem
    
    Given two strings s and t, find the longest common subsequence
    of s and t. Return the table that is used for each step of calculation.
    """
    m = len(s)
    n = len(t)
    C = [[0 for i in range(n+1)] for j in range(m+1)]
    for i in xrange(1, m+1):
        for j in xrange(1, n+1):
            if s[i-1] == t[j-1]:
                C[i][j] = C[i-1][j-1] + 1
            else:
                C[i][j] = max(C[i][j-1], C[i-1][j])
    return C

def lcsq_len(C):
    """The length of the longest subsequence"""
    return C[-1][-1]

if __name__ == '__main__':
    s = raw_input().strip()
    t = raw_input().strip()
    print lcsq_len(lcsq(s,t))
