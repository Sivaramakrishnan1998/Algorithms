#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void*a,const void*b)
{
    return (*(int *)a-*(int *)b);
}
int main()
{
    int num,temp;
    scanf("%d",&num);
    int i,arr[num],barr[num],j,count=6,count2=num,min=100000;
    for(i=0;i<num;scanf("%d",&arr[i]),i++);
    qsort(arr,num,sizeof(int),compare);
    j =0;

   // for(i=0;i<num;printf("%d",arr[i]),i++);
    printf("%d\n",count2);

     temp = arr[0];
     //printf("%d ",temp);
  while(count2--&&count>1)
  {
     count =0;
     for(i=0;i<num;i++)
     {
         if(arr[i]!=0)
         {
             arr[i]=arr[i]-temp;//printf("%d ",arr[i]);

            if(arr[i]!=0)
            {
                count++;
                if(min>arr[i]) min = arr[i];
            }
         }
     }
        printf("%d\n",count);
        temp = min;
    }


   return 0;
}
