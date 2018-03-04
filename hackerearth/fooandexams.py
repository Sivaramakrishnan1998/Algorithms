def pol(a,b,c,d,x):
	return ((a*x*x*x)+(b*x*x)+(c*x)+d)
	

n = int(input())
for i in range(n):
	a,b,c,d,k=map(int,input().split())
	st =0
	end = int((k/a)**(1/3)+1)
	mid = (st + end)/2
	while(st<=end):
		mid = (st+end)/2
		if (pol(a,b,c,d,mid)<=k and pol(a,b,c,d,mid+1)>k):
			break
		elif(pol(a,b,c,d,mid)<=k):
			st=mid+1
		else:
			end = mid -1

	print (mid)				


