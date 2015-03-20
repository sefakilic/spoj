def calc(s):
    tokens = s.split()
    total = int(tokens[0])
    i = 1
    while True:
        operator = tokens[i]
        if operator == '=':
            break
        operand = int(tokens[i+1])
        if operator == '+': total += operand
        elif operator == '-': total -= operand
        elif operator == '*': total *= operand
        elif operator == '/': total /= operand

        i += 2

    return total
    

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        s = raw_input() # empty line
        s = raw_input()
        print calc(s)
