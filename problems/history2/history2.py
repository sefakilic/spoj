def value(www):
    return sum(ord(c) for c in www)

def main():
    case = 0
    while True:
        case += 1
        try:
            t = int(raw_input())
            wwws = [raw_input().strip() for _ in range(t)]
            print "Case %d: %d" % (case, max(map(value, wwws)))
        except:
            break


if __name__ == '__main__':
    main()

