def rectangles(n):
    cnt = 0
    for i in xrange(1, n+1):
        for j in xrange(i, n+1):
            if i*j > n:
                break
            cnt += 1
    return cnt

if __name__ == '__main__':
    print rectangles(int(raw_input()))
