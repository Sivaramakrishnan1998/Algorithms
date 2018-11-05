#include<bits/stdc++.h>
#include<cstdlib>
int compare(const void*a,const void*b)
{
return (*(int *)a-*(int *)b);
}
int main()
{
int start,endd,i;
scanf("%d,%d",&start,&endd);
int arr[start*endd];
for(i=0;i<start*endd;i++)
{
  scanf("%d,",&arr[i]);
}
qsort(arr,start*endd,sizeof(int),compare);

for(i=start*endd-1;i>=0;i--)
    printf("%d",arr[i]);

return 0;
}
