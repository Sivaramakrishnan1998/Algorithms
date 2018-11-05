#include<stdio.h>
long long int base9(long long int num)
{
if(num<9)
return num;
else
return (num%9+10*base9(num/9));
}

int main()
{
long long int num;
        while(scanf("%lld",&num)!=EOF)
        {
        printf("%lld",base9(num));

        }
        return 0;
}
