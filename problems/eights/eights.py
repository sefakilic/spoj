def eights():
    for i in xrange(5000):
        if i**3 % 1000 == 888:
            print i


def kth_eights(k):
    L = [192, 442, 692, 942]
    return '%d%d' % (((k-1)/4), L[(k-1)%4])

if __name__ == '__main__':
    t = int(raw_input())
    for i in xrange(t):
        x = int(raw_input())
        print int(kth_eights(x))
        

                     
            
