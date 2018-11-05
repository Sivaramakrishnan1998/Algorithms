#include<stdio.h>
int main()
{

long long int unique=0,number = 229;
int pow=10,currDigit,prevDigit;

prevDigit = number%10;
unique = prevDigit;

while(number)
{
currDigit = number%10;

if(currDigit!=prevDigit)
{
unique += currDigit * pow;
prevDigit  = currDigit;
pow*=10;
}
number/=10;
}

printf("%lld",unique);

return 0;
}
