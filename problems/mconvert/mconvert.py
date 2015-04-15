
def main():
    cnt = 0
    while True:
        # read empty lines
        line = ""
        while not line:
            line = raw_input().strip()
        # read digit ordering
        digits = line
        M = {}
        for i,d in enumerate(digits):
            M[d] = i

        if cnt > 0:
            print ''

        while True:
            line = raw_input().strip()
            if not line:
                break   # empty line
            # find max digit of the number
            max_d = max((M[d] for d in line))
            # valid systems are max_d+1 to len(M)
            total = 0
            for base in xrange(max_d+1, len(M)+1):
                converted = 0
                for i in xrange(len(line)):
                    converted += pow(base, len(line)-i-1) * M[line[i]]
                #print converted
                total += converted
            print total

        cnt += 1

            
try:
    main()
except:
    # EOF
    pass


    

