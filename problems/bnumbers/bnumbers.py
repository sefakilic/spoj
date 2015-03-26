import itertools

def main():
    while True:
        try:
            n = int(raw_input())
            for num in itertools.product("123", repeat=n):
                print ''.join(num)
            print ''
        except:
            break

if __name__ == '__main__':
    main()
