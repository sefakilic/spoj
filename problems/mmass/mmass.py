

def mass(s):
    if not s:
        return 0

    if s[0] == 'H':
        if len(s) > 1 and s[1] in '0123456789':
            return int(s[1]) + mass(s[2:])
        else:
            return 1 + mass(s[1:])
        
    if s[0] == 'C':
        if len(s) > 1 and s[1] in '0123456789':
            return 12*int(s[1]) + mass(s[2:])
        else:
            return 12 + mass(s[1:])

    if s[0] == 'O':
        if len(s) > 1 and s[1] in '0123456789':
            return 16*int(s[1]) + mass(s[2:])
        else:
            return 16 + mass(s[1:])

    if s[0] == '(':
        num_paren = 1
        # find matching paren
        for i in xrange(1, len(s)):
            if s[i] == '(':
                num_paren += 1
            if s[i] == ')':
                num_paren -= 1
            if num_paren == 0:
                if len(s) > i+1 and s[i+1] in '0123456789':
                    return int(s[i+1]) * mass(s[1:i]) + mass(s[i+2:])
                else:
                    return mass(s[1:i]) + mass(s[i+1:])
                    
        

        

if __name__ == '__main__':
    s = raw_input().strip()
    print mass(s)
