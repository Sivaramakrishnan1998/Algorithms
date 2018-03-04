n = int(input())
p = int(input())
c,c1=0,0
for i in range(n-1,p,-1):
	c+=1
for i in range(1,p):
	c1+=1

print (min(c,c1))	