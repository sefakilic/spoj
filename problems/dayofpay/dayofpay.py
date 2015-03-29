def main():
    guys = ["Anjan", "Sufian", "Alim", "Shipu", "Sohel", "Sumon"]
    counter = 0
    while True:
        counter += 1
        n = int(raw_input())
        if n == 0:
            break
        print "Case %d: %s" % (counter, guys[(n-1)%6])

if __name__ == '__main__':
    main()

