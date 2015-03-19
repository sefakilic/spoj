str = raw_input().strip()
vowels = "aeiouyAEIOUY"
cnt = 0
for v in vowels:
    cnt += str.count(v)
print cnt
    
