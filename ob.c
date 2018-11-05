/*#include<stdio.h>
int main()
{
int c = 5, sum = 1000;

while(c--)
{
sum = sum/c;
}
printf("%d ",sum);*/

#include<stdio.h>

int main()
{
int a[3][3]={
{1,2,3},{4,5,6},{7,8,9}
};
int **ptr;
ptr =a;

printf("%d ",*(*(ptr+0)+0));


  return 0;
}


