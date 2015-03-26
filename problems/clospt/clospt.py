def d(pa, pb):
    return (pa[0]-pb[0])**2 + (pa[1]-pb[1])**2
    
t = int(raw_input())
points = [map(int, raw_input().split()) for _ in range(t)]
dists = [d(x,y) for x in points for y in points if x != y]
print min(dists)
