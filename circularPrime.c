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

int isprime(int i)
{
    int j,flag=0;
    for(j=2;j<=sqrt(i);j++)  {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }


        if (flag==0)
        {
            return 1;
        }
    else{
            return 0;
        }
}
int powe(int exp){

    int power = 1,base = 10;
while(exp--){
    power = power*base;
}
return power;
}

int main() {
    int n, i, j, min, max, flag=0;
     scanf("%d %d",&min,&max);

    int arr[max],k=0;
    for(i=min+1;i<max;i++)
    {
        flag=0;

        for(j=2;j<=sqrt(i);j++)  {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }


        if (flag==0)
        {
            int len = length(i);
            int lim = len;
            int power = powe(lim-1);

            int j,k,p=0;
            for(k=1;k<=len;k++)
            {int num=i;
             for(j=0;j<k;j++){
                 int rem =num%10;
                 num = (num/10)+(rem*power);
             }
             int result = isprime(num);
             if(result==1)
             {
                 p++;
             }

            }
           if(p==len)
               printf("%d ",i);
        }
    }

    return 0;
}
