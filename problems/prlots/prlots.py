def main():
    t = int(raw_input())
    for _ in range(t):
        s = raw_input().strip()
        indices = [int(raw_input()) for _ in s]
        print ''.join(s[index-1] for index in indices)

if __name__ == '__main__':
    main()
