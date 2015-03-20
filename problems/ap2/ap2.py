def find_series(three_term, three_last_term, total):
    if three_term==three_last_term:
        return [three_term] * (total / three_term)
    N = 2 * total / (three_term + three_last_term) # length of series
    K = (three_last_term - three_term) / (N-5)     # increment rate
    series = range(three_term-2*K, three_last_term+3*K, K)
    return series

if __name__ == '__main__':
    N = int(raw_input())
    for i in xrange(N):
        A, B, C = map(int, raw_input().split())
        series = find_series(A,B,C)
        print len(series)
        print ' '.join(map(str, series))
    
