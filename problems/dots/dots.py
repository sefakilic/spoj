from math import sqrt

def main():
    t = int(raw_input())
    for _ in range(t):
        n = int(raw_input())
        sq = int(sqrt(2*n))
        if sq*(sq+1)/2 == n:
            print "Yes"
        else:
            print "No"

if __name__ == '__main__':
    main()
