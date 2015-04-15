def rle_encode(s):
    # run length encoding
    encode = ""
    i = 0
    while i < len(s):
        c = s[i]  # char
        cnt = 0      # count
        while cnt < 9 and i < len(s) and s[i] == c:
            cnt += 1
            i += 1
        encode += '%d%c' % (cnt, c)
    return encode

def rle_decode(s):
    # run length decoding
    i = 0
    decode = ""
    while i < len(s):
        decode += s[i+1] * int(s[i])
        i += 2
    return decode

def calc(s):
    tokens = s.split()
    op_a = int(rle_decode(tokens[0]))
    operator = tokens[1]
    op_b = int(rle_decode(tokens[2]))
    if operator == '+': res = op_a + op_b
    elif operator == '-': res = op_a - op_b
    elif operator == '*': res = op_a * op_b
    elif operator == '/': res = op_a / op_b
    print tokens[0], tokens[1], tokens[2], '=', rle_encode(str(res))


if __name__ == '__main__':
    while True:
        try:
            s = raw_input().strip()
            calc(s)
        except:
            break
