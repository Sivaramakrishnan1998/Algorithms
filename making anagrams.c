#include<stdio.h>

int main()
{
    char str1[10000],str2[10000];
    int FreqStr1[26]={0},FreqStr2[26]={0};
    int i,j =0,count=0;
    fgets(str1,10000,stdin);
    fgets(str2,10000,stdin);

    for(i=-1;str1[++i]!='\0';FreqStr1[str1[i]-'a']++);
    for(i=-1;str2[++i]!='\0';FreqStr2[str2[i]-'a']++);

    for(i=0;i<26;i++)
    {
        j = FreqStr2[i]-FreqStr1[i];
        if(j<0)j= -j;
        count +=j;

    }


    printf("%d ",count);
return 0;
}
