#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void *a,const void *b)
{
return (*(int *)a-*(int *)b);
}
int main()
{
int start,size;
scanf("%d",&size);
int arr[size];
for(start=0;start<size;start++)
scanf("%d",&arr[start]);

qsort(arr,size,sizeof(int),compare);

for(start=0;start<size;start++)
printf("%d  ",arr[start]);

return 0;
}
