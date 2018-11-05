#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
char str[100];
int size,start,end,sFound,tmp,len;
scanf("%d",&size);
fgets(str,100,stdin);
len = strlen(str);

        for(start=0,end=0;end<len;end++)
        {
        if(!isalnum(str[end])||(end == len-1))
        {
        if(end<len-1)
        {
        sFound = end - 1;
        }else{
        sFound = end;
        }
        while(start<sFound)
        {
        tmp = str[start];
        str[start]=str[sFound];
        str[sFound]=tmp;
        start++;
        sFound--;
        }
        start = end +1;
        }
        }

printf("%s",str);
return 0;
}
