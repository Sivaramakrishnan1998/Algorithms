#include<stdio.h>
#include<stdlib.h>

typedef struct
{
  int n;
  int *array1;
  int *array2;
  int *array3;
}Vote;

void billpassing(Vote *);
void deallocate(Vote *);

void billpassing(Vote *sp)
{
  int count =0,m1=0,m2=0,i=0;
  scanf("%d",&sp->n);
  sp->array1 = (int *)malloc(sizeof(int)*sp->n);
  for(i=0;i<sp->n;i++)
{ scanf("%d",&sp->array1[i] );
if(sp->array1[i]==1)
{
  m1++;
}
}
  sp->array2 = (int *)malloc(sizeof(int)*sp->n);
  for(i=0;i<sp->n;i++)
  {
  scanf("%d",&sp->array2[i] );
  if(sp->array2[i]==1)
  {
    m2++;
  }
}
  sp->array3 = (int *)malloc(sizeof(int)*sp->n);
  for(i=0;i<sp->n;i++)
  scanf("%d",&sp->array3[i] );

for(i=0;i<sp->n;i++)
{
  if(sp->array1[i]==1&&sp->array2[i]==1&&sp->array3[i]==1)
  {
    count++;
  }
}
if(count >= m1/2 && count>=m2/2)
printf("Both the ministers are satisfied");
else if(count>=m1/2 || count>=m2/2)
printf("One minister satisfied");
else
printf("Both the ministers are not satisfied");
}

void deallocate(Vote *sp)
{
  if(sp->array1==NULL)
  free(sp->array1);
  if(sp->array2==NULL)
  free(sp->array2);
  if(sp->array3==NULL)
  free(sp->array3);
}







int main()
{
  Vote v;
  billpassing(&v);
  deallocate(&v);
  return 0;
}
