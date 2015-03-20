

def diamond(n):
    lines = []
    for i in xrange(n/2):
        spaces = ' ' * (n/2-i)
        stars = '*' * (2*i + 1)
        if len(stars) <= 3:
            mstars = stars
        else:
            mstars = '*' + (i-1)*' ' + '*' + (i-1)*' ' + '*'
        lines.append(spaces + mstars + spaces)
    return lines

if __name__ == '__main__':
    n = int(raw_input())
    lines = diamond(n)
    print '\n'.join(lines + ['*'*n] + lines[::-1])

