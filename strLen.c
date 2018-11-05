#include<stdio.h>

//int slength(char string1[])
//{
    int i=0;
    for(i = 0; string1[i] != '\0'; ++i);
    return i;
//}
int stringcompare(char string1[],char string2[]){
    int i,temp;
     for(i=0; string1[i]!='\0'; i++)
       {
              if(string1[i] == string2[i])
              temp = 1;
              else
              temp = 0;
       }
    return temp;
}
int main()
{
char s[100],a[100];
scanf("%s %s",s,a);
//printf("%d",slength(s));

printf("%d",stringcompare(s,a));
return 0;
}
