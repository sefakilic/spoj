import string

numberOfTestCases = string.atoi(raw_input())
while (numberOfTestCases > 0):
    numberOfTestCases -= 1
    n = string.atoi(raw_input())
    print (4*n*n*n + 6*n*n*(n-1))
    
    
    
