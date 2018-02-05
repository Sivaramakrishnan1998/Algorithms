#using recursion
def recur_factorial(k,n):
  
   if k == 1:
       return n
   else:
       return k*recur_factorial(k-1,n)

nu = int(input())
for i in range(nu):
    k,n = map(int,input().split())

    print(recur_factorial(k,n))