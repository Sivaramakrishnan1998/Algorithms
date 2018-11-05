#include <iostream>
// void print(int val,int count)
// {
//   while(count--)
//   {
//     printf("%d",val);
//   }
// }
int main()
{

  int size;
  scanf("%d\n",&size);
  int arr[size];
  for(int i=0;i<size;scanf("%d",&arr[i]),i++);

  for(int i=0;i<size;i++)
  {
    arr[arr[i]%size]+=size;
  }
  for(int i=0;i<size;i++)
  {
    if(arr[i]/size!=0)
    printf("%d\t%d\n",i,arr[i]/size);

  }

  return 0;
}
