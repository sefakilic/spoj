def LGIS(nums):
    """Given a list of numbers, find the longest increasing sequence"""
    L = [None for i in xrange(len(nums))]
    P = [None for i in xrange(len(nums))]
    for i in xrange(len(nums)):
        L[i] = 1  # longest increasing seq that ends in L[i]
        P[i] = -1 # pointer to reconstruct the sequence
        for j in xrange(i):
            if nums[j] < nums[i] and L[j] + 1 > L[i]:
                P[i] = j
                L[i] = L[j] + 1
    index = L.index(max(L))
    seq = [nums[index]]
    while P[index] > -1:
        index = P[index]
        seq.append(nums[index])
    seq.reverse()
    return seq

if __name__ == '__main__':
    n = int(raw_input())
    nums = map(int, raw_input().split())
    print len(LGIS(nums))
