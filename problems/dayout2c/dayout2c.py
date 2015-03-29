from math import sqrt

def is_prime(n):
    if n == 1:
        return False
    for i in xrange(2, int(sqrt(n)+1)):
        if n%i == 0:
            return False
    return True

def main():
    t = int(raw_input())
    for _ in xrange(t):
        n = int(raw_input())
        if is_prime(n):
            print "%d is a prime" % n
        else:
            print "%d is not a prime" % n

if __name__ == '__main__':
    main()
