def offside(A, D):
    A.sort()
    D.sort()
    if A[0] < D[1]:
        return 'Y'
    return 'N'

if __name__ == '__main__':
    while True:
        a, d = map(int, raw_input().split())
        if a == d == 0:
            break
        A = map(int, raw_input().split())
        D = map(int, raw_input().split())
        print offside(A, D)


    
