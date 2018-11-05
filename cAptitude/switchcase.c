#include<stdio.h>
int main()
{
  int a=5;
  switch (a) {
    default:
    a = 4;
    case 6:
    a+=10;
    case 5:
    a+=10;
    case 1:
    a+=20;

  }
  printf("%d\n",a);
  return 0;
}
