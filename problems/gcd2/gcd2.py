# python3

def gcd(a, b):
    if b==0: return a
    else: return gcd(b, a%b)

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        A, B = map(int, input().split())
        print(gcd(A, B))
