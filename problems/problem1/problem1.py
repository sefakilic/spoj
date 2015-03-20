f=lambda:int(input())
T=f()
while T:
	T-=1
	N=f()
	print " ".join(map(str,xrange(N-1,-1,-1))) if N>0 else "NOT POSSIBLE"
