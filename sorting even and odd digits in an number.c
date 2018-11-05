#include<stdio.h>
//if flag = 0 ,even first then odd else vice versa
long long int length(long long int n)
{long long int i=0;
    while(n>0)
    {
        i++;n/=10;
    }
    return i;
}

long long int set_it_even(long long num,long long sort,long long oddLen)
{
    int i,digit;
    long long int sortedNum = 0,count=0,diff;
    for(i=2;i<=8;i+=2)
    {
    long long int tempNum = num;
    while(tempNum>0)
    {
        digit = tempNum%10;
        if(digit == i)
        {
            count++;
            sortedNum *= 10;
            sortedNum += digit;
        }
        tempNum /= 10;
    }
}
    if(sort!=0)
    {   diff = length(num)-(oddLen+count);
  //  printf("diff:%lld\t%lld",count,oddLen);

    for(int i=0;i<diff;i++)
        printf("0");
    printf("%lld",sortedNum);
    printf("%lld",sort);
}
    else
    {
    return sortedNum;
    }

   return 0;
}
long long int set_it_odd(long long num,long long sort,long long oddLen)
{
    int i,digit;
    long long int sortedNum = 0,count=0,diff;
    for(i=1;i<=9;i+=2)
    {
    long long int tempNum = num;
    while(tempNum>0)
    {
        digit = tempNum%10;
        if(digit == i)
        {
            count++;
            sortedNum *= 10;
            sortedNum += digit;
        }
        tempNum /= 10;
    }
    }
    if(sort!=0)
    {
     diff = length(num)-(oddLen+count);
  //  printf("diff:%lld\t%lld",count,oddLen);



    printf("%lld",sortedNum);


    for(int i=0;i<diff;i++)
        printf("0");

    printf("%lld",sort);
    }
    else
    {
    return sortedNum;
    }
    return 0;
}


int main()
{
    long long int num,sort,lenOdd;
    int key;
    scanf("%lld %d",&num,&key);
    if(key==0)
    {
        sort =  set_it_odd(num,0,0);
      //  printf("%lld\n\n\n\n\n",sort);
        lenOdd = length(sort);
        set_it_even(num,sort,lenOdd);

    }
    else
    {
        sort= set_it_even(num,0,0);
        lenOdd = length(sort);
        set_it_odd(num,sort,lenOdd);

    }



    return 0;
}
