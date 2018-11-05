#include<stdio.h>
void incre(int *a)
 {
  *a = *a + 2;
 }
int main()
        {
        int a[10],i;
        for(i=0;i<10;i++)
        a[i]=9-i;

        for(i=0;i<10;i++)
        printf("%d ",a[i]);

        printf("\n\n\n");

        for(i=0;i<10;i++)
        a[i]=a[a[i]];

        for(i=0;i<10;i++)
        printf("%d ",a[i]);

        }
