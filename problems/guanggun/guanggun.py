# Bruteforce first few, you'll see the pattern.
while True:
    try:
        n = int(raw_input())
        print (n/9) * 81 + (n%9)**2
    except:
        break
