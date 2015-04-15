def binary_to_text(b):
    def bin_to_char(b):
        n = int(b,2)
        if n == 0:
            return ' '
        return chr(ord('A') + n - 1)

    s = ''
    for i in xrange(0, len(b), 5):
        b_char = b[i:i+5]
        s += bin_to_char(b_char)

    return s

def decrypt(msg, r, c):
    matrix = [[None for j in xrange(c)] for i in xrange(r)]
    filled = [[0 for j in xrange(c)] for i in xrange(r)]
    for i in xrange(r):
        for j in xrange(c):
            matrix[i][j] = msg[i*c+j]
    s = ""
    x = 0
    y = 0
    direction = 'r' # right
    num_read = 0
    
    while num_read < r*c:

        s += matrix[x][y]
        num_read += 1
        filled[x][y] = 1

        if direction=='r': 
            if y<c-1 and filled[x][y+1]==0:
                y += 1
            else:
                x += 1
                direction='d' # down
        elif direction=='d':
            if x<r-1 and filled[x+1][y]==0:
                x += 1
            else:
                y -= 1
                direction='l' # left
        elif direction=='l':
            if y>0 and filled[x][y-1] == 0:
                y -= 1
            else:
                x -= 1
                direction='u' # up
        elif direction=='u':
            if x>0 and filled[x-1][y] == 0:
                x -= 1
            else:
                y += 1
                direction = 'r'
                
    return s

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        r, c, s = raw_input().split()
        print i+1, binary_to_text(decrypt(s, int(r), int(c)))
                
                
