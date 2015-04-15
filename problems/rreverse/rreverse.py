while True:
    try:
        s = raw_input().strip()
        print int(s[::-1])
    except:
        break
