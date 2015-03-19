def knapsack(maxw, items):
    """Given maximum weight and list of items as (weight, value) pairs, solve
    0-1 knapsack problem"""
    # Let M[i,w] be maximum value with weight less than equal to w with items up
    # to i
    M = {}
    for j in xrange(maxw+1):
        M[(-1, j)] = 0
    for i, (wi, vi) in enumerate(items):
        for j in xrange(maxw+1):
            if wi <= j:
                M[(i, j)] = max(M[(i-1, j)], M[(i-1, j-wi)] + vi)
            else:
                M[(i, j)] = M[(i-1, j)]
    return M[(len(items)-1, maxw)]

def main():
    head = lambda xs: xs[0]
    last = lambda xs: xs[-1]
    s, n = map(int, raw_input().split())
    items = []
    for _ in xrange(n):
        a, b = map(int, raw_input().split())
        items.append((a, b))
    print knapsack(s, items)

if __name__ == '__main__':
    main()


