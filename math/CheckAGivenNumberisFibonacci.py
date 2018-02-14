
# when either 5*n*n+2 or 5*n*n-2 is equal to perfect Squares we can say given number is fibonacci
import math
def perfectSquare(num):
	# sqrt = int(num**(1.0/2))//normal
	sq = int(math.sqrt(num))#using inbuild function
	
	# print (sq)
	return sq*sq == num




num = int(input("Enter the number to check whether it is a fibonacci no or not"))
if perfectSquare(5*num*num+4) or perfectSquare(5*num*num-4):
	print ("True")
else:
	print ("False")	

