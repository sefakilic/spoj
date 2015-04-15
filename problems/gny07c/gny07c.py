def text_to_binary(s):
    def char_to_bin(c):
        if c == ' ':
            b = bin(0)
        else:
            b = bin(ord(c)-ord('A')+1)


        b = b[2:]
        return '0'*(5-len(b)) + b

    msg = ''.join(map(char_to_bin, s))
    return msg

def encrypt(msg, r, c):
    matrix = [['0' for j in xrange(c)] for i in xrange(r)]
    filled = [[0 for j in xrange(c)] for i in xrange(r)]
    x = 0
    y = 0
    direction = 'r' # right
    for ch in msg:

        matrix[x][y] = ch
        filled[x][y] = 1
        #print x, y, direction
        #print filled
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
                

    s = ''
    for i in xrange(r):
        for j in xrange(c):
            s += matrix[i][j]

    return s

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        inp = raw_input().strip('\n')
        first_sp = inp.index(' ')
        second_sp = inp.index(' ', first_sp+1)
        r = inp[:first_sp]
        c = inp[first_sp+1:second_sp]
        s = inp[second_sp+1:]
        print i+1, encrypt(text_to_binary(s), int(r), int(c))
                
                
