def num_vowels(s):
    return len([c for c in s if c in "aeiouAEIOU"])

while True:
    try:
        s = raw_input().strip()
        print '%d/%d' % (num_vowels(s), len(s))
    except:
        break
