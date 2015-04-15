if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        N, start = map(int, raw_input().split())

        print ("Airborne" if start==0 else "Pagfloyd"), "wins."
        
