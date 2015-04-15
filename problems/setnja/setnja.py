if __name__ == '__main__':
    x = raw_input().strip()
    total = 1
    num_branches = 1
    
    for c in x:
        mem = 2*total
        if c=='R':
            total = mem + num_branches
        elif c=='L':
            total = mem
        elif c=='P':
            total = total
        elif c=='*':
            total = (mem + 
                     mem + num_branches +
                     total)                     
            num_branches *= 3
            
    print total
