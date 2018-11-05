#include<stdio.h>
#include <stdlib.h>


char p[1000][1000],w=0;
void decode(char str[],int index,char pstr[],int plen)
{
    if(str[index]!='\0'){
    pstr[plen]=str[index]-'0'+'a'-1;
    decode(str,index+1,pstr,plen+1);
    if((str[index+1]!='\0')&&((str[index]<='2')||(str[index]=='2'&&str[index+1]<='6')))
    {
        pstr[plen]=(((str[index]-'0')*10)+(str[index+1]-'0')+'a'-1);
        decode(str,index+2,pstr,plen+1);

    }
    } else {
        pstr[plen]='\0';
        printf("%s ", pstr);

    }
}
int main()
{
    char str[100],pstr[100];
    scanf("%s",str);
    decode(str,0,pstr,0);
}
