tokens = raw_input().split()

if tokens[1] == 'C':
    print (32 + 9*int(tokens[0])/5.0), 'F'
else:
    print 5*(int(tokens[0])-32)/9.0, 'C'
