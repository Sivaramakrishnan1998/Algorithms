#include<stdio.h>
#include<string.h>
void swap(char *One,char *Two)
{
  char temp;
  temp = *One;
  *One = *Two;
  *Two = temp;
}

void permute(char *a,int left,int right)
{
  int i;
  if(left==right)
    printf("%s  ",a);
  else
  {
      for(i=left;i<right+1;i++)
      {
        swap((a+left),(a+i));
        permute(a,left+1,right);
        swap((a+left),(a+i));
      }
  }
}
int main()
{
  char str[1000];
  fgets(str,1000,stdin);
  int len = strlen(str);
  permute(str,0,len-1);
  return 0;
}
