#include<stdio.h>
#include<string.h>
int main()
{
int size,i;
scanf("%d",&size);
char str[size];
scanf("%s",str);
//printf("%d",strlen(str));
for(i=size;i>0;i--)
{
if(str[i]==' ')
{str[i]='\0';
    printf("%s ",&(str[i])+1);
}
}
printf("%s",str);
return 0;
}
