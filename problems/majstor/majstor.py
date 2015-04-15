R = int(raw_input())
sven = raw_input().strip()
num_friends = int(raw_input())
friends = []
for _ in xrange(num_friends):
    friends.append( raw_input().strip() )

score = 0
max_score = 0
for i in xrange(R):
    counts = {'R': 0, 'P': 0, 'S': 0}
    for j in xrange(num_friends):
        counts[friends[j][i]] += 1
    score_r = counts['R'] + 2*counts['S'] # score if sven has R
    score_p = counts['P'] + 2*counts['R'] # score if sven has P
    score_s = counts['S'] + 2*counts['P'] # score if sven has S

    if sven[i] == 'R': score += score_r
    elif sven[i] == 'P': score += score_p
    else: score += score_s

    max_score += max(score_r, score_p, score_s)

print score
print max_score



