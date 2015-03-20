if __name__ == '__main__':
    f = []
    while True:
        try:
            x = raw_input().strip()
        except:
            break

        toks = x.split()
        f.append((toks[0], int(toks[1])))
        
    f.sort(key=lambda x: x[0])
    f.sort(key=lambda x: x[1], reverse=True)

    for w,_ in f:
        print w
    
