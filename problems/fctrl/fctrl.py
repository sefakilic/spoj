"""http://www.spoj.com/problems/FCTRL/"""

T = int(raw_input())

for i in xrange(T):
    trailing_zeros = 0
    last_mult_five = 5
    n = int(raw_input())
    while last_mult_five <= n:
        trailing_zeros += n / last_mult_five
        last_mult_five *= 5

    print trailing_zeros
