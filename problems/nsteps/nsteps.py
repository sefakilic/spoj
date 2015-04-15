def nsteps(x,y):
    if x == y:
        tmp = 2*x
        if x%2 == 0:
            return tmp
        else:
            return tmp-1

    elif x-2 == y:
        tmp = nsteps(x-1, y+1)
        if x%2 == 0:
            return tmp+1
        else:
            return tmp-1
    else:
        return None

    


if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        x,y = map(int, raw_input().split())

        res = nsteps(x,y)
        if res != None:
            print res
        else:
            print "No Number"
