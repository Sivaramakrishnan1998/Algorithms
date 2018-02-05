#include <stdio.h>
int square(int n);
int reverse(int n);

int main() {
	//code
	int n;
	scanf("%d",&n);
// 	a = square(n);
// 	b = square(reverse(n));
	if (square(n)==reverse(square(reverse(n))))
	{
	    printf("Adam Number\n");
	}
	else
	{
	    printf("NO");
	}
	return 0;
}
int square(int n)
{
   return n*n; 
}
int reverse(int n)
{
    int rev = 0;
    while(n>0)
    {
        rev = rev*10 + n%10;
        n /=10;
        
    }
    return rev;
}