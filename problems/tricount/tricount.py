def tricount(N):
    N_3 = N**3
    N_2 = N**2

    total = 0
    total += (N_3 + 3*N_2 + 2*N - N_2*(N+1) + N*(N+1)*(2*N+1)/6 -
             3*N*(N+1)/2)
    
    X = N/2
    total += (N_2*X - 4*N*X*(X+1)/2 + 3*N*X - 6*X*(X+1)/2
              + 4*X*(X+1)*(2*X+1)/6 + 2*X)
    
    return total/2
            
if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        print tricount(int(raw_input()))
