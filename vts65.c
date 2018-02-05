#include<stdio.h>
int main()
{
  int n,sum=0,tablets,i,j,count=0,temp;
  scanf("%d",&n);
  int a[n],b[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("%d",&tablets);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
    {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;

    }
  }
  }
  for(i=0;i<n;i++)
  {
    if(sum<=tablets)
    {
    	sum+=a[i];
    	count+=1;
    }

  }

for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}

printf("%d",count);
return 0;
}
