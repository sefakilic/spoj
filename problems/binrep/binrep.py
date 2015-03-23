def numones(n):
    return "{0:b}".format(n).count('1')
    
def main():
    t = int(raw_input())
    print '\n'.join(str(numones(int(raw_input()))) for _ in range(t))

if __name__ == '__main__':
    main()
