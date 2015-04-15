T = int(raw_input())

states = [[0]*10] * 10

for case in xrange(T):
    N, P = map(int, raw_input().split())
    for i in xrange(N):
        states[i] = map(int, raw_input().split())

    # Check condition 1
    for j in xrange(P):
        solved_by_one_team = False
        for i in xrange(N):
            if states[i][j] == 1:
                solved_by_one_team = True
                break
        if solved_by_one_team: continue
        else: # at least one problem not solved by any team
            case1 = 0
            break
    else:
        case1 = 1 # all problems solved by at least one team

    solved_per_team = []
    for i in xrange(N):
        solved_per_team.append(sum(states[i]))
    # Check condition 2
    if min(solved_per_team) == 1:
        case2 = 1
    else:
        case2 = 0
    # Check condition 3
    if max(solved_per_team) < P:
        case3 = 1
    else:
        case3 = 0

    print 'Case %d: %d' % (case+1, 4*case1 + 2*case2 + case3)


 
