#include<stdio.h>
#include<stdlib.h>

int *compare(const void*a,const void *b)
{
return *((int*)a)-*((int*)b);
}

int Add(int a,int b)
{
return a+b;
}
void PH(char *s)
{
printf("hello prodigy %s",s);
}
int main()
{

int (*p)(int,int);
void (*pi)(char *);
p = Add;
int c = p(2,3);
printf("%d\n",c);
pi = PH;
pi("siva");

int i,A[]={-31,22,-1,50,-6,4};

qsort(A,6,sizeof(int),compare);

for(i=0;i<6;i++) printf("%d ",A[i]);



return 0;
}
