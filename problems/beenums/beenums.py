import math

def beenums(x):
    n = int(math.sqrt((x-1)/3.0))
    if 3*n*(n+1)+1 == x:
        return 'Y'

    return 'N'


if __name__ == '__main__':

    while True:
        t = int(raw_input())
        if t==-1:
            break
        print beenums(t)
