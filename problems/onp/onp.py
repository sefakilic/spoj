def to_RPN(s):
    """Given a infix notation expression, return the reverse polish notation"""
    if s[0] != '(':
        # primitive
        return s

    s = s[1:-1] # remove the parens
    # find the operator
    open_paren = 0
    for i in xrange(len(s)):
        if s[i] == '(':
            open_paren += 1
        elif s[i] == ')':
            open_paren -= 1
        elif s[i] in '+-*/^' and open_paren == 0:
            return to_RPN(s[:i]) + to_RPN(s[i+1:]) + s[i]

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        s = raw_input().strip()
        print to_RPN(s)


