

def amusing(k):
    num_digits = 1
    while 2**num_digits < k:
        k -= 2**num_digits
        num_digits += 1

    # the number has <num_digits> digits
    num = ''
    k -= 1

    for i in xrange(num_digits):
        if k % 2 == 1:
            num += '6'
            k -= 1
        else:
            num += '5'
        k /= 2
    return num[::-1]

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        n = int(raw_input())
        print amusing(n)
