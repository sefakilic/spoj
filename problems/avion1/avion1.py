any_FBI = False
num_read_lines = 0
while num_read_lines < 5:
    s = raw_input().strip()
    if s == '':
        continue
    if s.find('FBI') >= 0: # string found
        any_FBI = True
        print num_read_lines+1,
    num_read_lines += 1
if any_FBI:
    print ''
else:
    print 'HE GOT AWAY!'
