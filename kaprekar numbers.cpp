#include <bits/stdc++.h>
#include<cstdlib>
#include<math.h>
using namespace std;

// Complete the kaprekarNumbers function below.
bool kaprekarNumbers(int num)
{
    if(num==1)
        return true;
   int temp,sq = num*num,base,sqC=0,count;
    temp = sq;
    while(temp)
    {
        sqC++;
        temp/=10;
    }
    for(count=1;count<sqC;count++)
    {
        int power = pow(10,count);
        if(power==num)
            continue;

        int sum = sq%power+sq/power;

            if(num==sum)
                return true;


    }
return false;
}

int main()
{
    int start,i,end,check=0;1

    cin>>start>>end;

    for(i=start;i<end;i++)
    {
        if(kaprekarNumbers(i))
        {
            printf("%d ",i);
            check++;
        }
    }
    if(check==0)
        printf("INVALID RANGE");
    return 0;
}
