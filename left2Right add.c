/*Given two numbers, perform addition from Left->Right

6321

5235
1656
Input Format

Get the two integers

Constraints

1 ≤ n1,n2 ≤ 1000000007

Output Format

print the value

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int length(int n){
 int k=0;
    while(n>0)
    {
        k++;
        n/=10;}
    return k;

}
int power(int exp)
{
int power=1,base=10;
while(--exp)
{
power = power * base;
}
return power;
}

int main()
{
long long int num1,num2;
int carry=0,div1,div2,sumDiv,sum,count=0;
scanf("%lld",&num1);
scanf("%lld",&num2);
int pow1,pow2,diff;

pow1 = power(length(num1));
pow2 = power(length(num2));
//printf("%d %d\n",pow1,pow2);
//printf("%d",length(num2));
diff = (pow1>pow2)?pow1/pow2:pow2/pow1;

if(pow1<pow2)
{
num1 *=diff;
pow1 *= diff;
}else
{
num2*=diff;
pow2*=diff;
}
printf("%d %d\n",pow1,pow2);
printf("\n");
while(count<length(num1))
{
div1 = num1/pow1;
div2 = num2/pow1;
//printf("%d\t\t%d",div1,div2);
sumDiv = div1%10 + div2%10;
sum = carry + sumDiv%10;
printf("%d",sum);
carry = sumDiv/10;
pow1/=10;

//printf("%d",sum);
count++;
}return 0;


}






