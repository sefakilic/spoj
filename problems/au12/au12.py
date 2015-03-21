from math import sqrt

def is_prime(n):
    if n == 1:
        return False
    for i in xrange(2, int(sqrt(n)+1)):
        if n%i == 0:
            return False
    return True


def next_prime(n):
    while True:
        if is_prime(n):
            return n
        n += 1

def main():
    t = int(raw_input())
    for _ in xrange(t):
        print next_prime(int(raw_input())+1)

if __name__ == '__main__':
    main()
