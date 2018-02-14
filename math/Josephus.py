


def bloodkill(n,k):
	if n==1:
		return n
	else:	

		return (bloodkill(n-1,k)+k-1)%n+1

n = int(input())
k = int(input())

print (bloodkill(n,k))
# if u consider number starts from 0 ,then print(bloodkill(n,k)-1)