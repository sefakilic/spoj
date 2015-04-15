if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        lst = map(int, raw_input().split())
        lst.sort()
        print ("OK" if lst[0] + lst[1] == lst[2] else "NOK")
