def is_tautogram(line):
    words = line.split()
    first_letters = [word[0].lower() for word in words]
    if all(first_letters[0]==first_letters[i] for i in xrange(len(first_letters))):
        return 'Y'
    else:
        return 'N'


if __name__ == '__main__':
    while True:
        s = raw_input().strip()
        if s == '*': break
        print is_tautogram(s)
