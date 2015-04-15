"""
Let AC be x. Then AB^2 = 4r^2 - x^2

s = AB^2 + AC = 4r^2 - x^2 + x.

Taking the derivative wrt x. s is max when x = 1/2.

max_s = 4r^2 + 1/4

"""


if __name__ == '__main__':
    num_case = int(raw_input())
    for i in xrange(num_case):
        x = int(raw_input())
        print 'Case %d: %.2f' % (i+1, 4*x*x + 0.25)
