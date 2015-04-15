def main():
    T = int(raw_input())
    for i in xrange(T):
        A, B = map(int, raw_input().split())
        if A*B<0: # opposite directions
            V1 = max(abs(A), abs(B))
            V2 = min(abs(A), abs(B))
            tmp_x = V2
            tmp_y = V1+V2
        else:
            A,B = abs(A), abs(B)
            V1 = max(A,B)
            V2 = min(A,B)
            tmp_x = V2
            tmp_y = V1-V2

        cnt = 1
        while tmp_x % tmp_y != 0:
            cnt += 1
            tmp_x += V2
        print cnt

        
if __name__ == '__main__':
    main()

    
