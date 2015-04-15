def fashion(A, B):
    return sum(map(lambda (x,y): x*y, zip(sorted(A), sorted(B))))

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        n = int(raw_input())
        A = map(int, raw_input().split())
        B = map(int, raw_input().split())
        print fashion(A,B)
