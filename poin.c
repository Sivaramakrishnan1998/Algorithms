#include<stdio.h>
int main()
{
int m = 1,s=4,i;
int a[]={8,9,9,9};
int r[5]={0};

for(i=s-1;i>-1;i--)
 {
 r[i+1]=(a[i]+m)%10;
 m=(a[i]+1)/10;
 }
 for(i=0;i<5;printf("%d",r[i++]));

}
