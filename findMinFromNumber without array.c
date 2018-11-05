#include <stdio.h>
int length(int n)
{int i=0;
    while(n>0)
    {
        i++;n/=10;
    }
    return i;
}

int main() {
//sorting digits of number
int num,i,len,sortedNum=0,digit;
scanf("%d",&num);
len = length(num);
printf("%d\n\n",len);
for(i=0;i<=9;i++)
{
    int tempNum = num;
    while(tempNum>0)
    {
        digit = tempNum%10;
        if(digit == i)
        {
            sortedNum *= 10;
            sortedNum += digit;
        }
        tempNum /= 10;
    }



}

//removing repeated numbers
long long int unique=0,number=sortedNum;
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
