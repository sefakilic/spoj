

def uj(n, d):
    return n**d

if __name__ == '__main__':
    while True:
        n, d = map(int, raw_input().split())
        if n == d == 0:
            break
        print uj(n, d)
    
