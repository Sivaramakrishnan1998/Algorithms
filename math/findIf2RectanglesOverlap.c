#include <stdio.h>

void two_triangle(int x1,int y1,int x2,int y2)
{
	if(x1>x2 || x2>x1)
		printf("False cannot be formed\n");
	else if(y1>y2 || y2>y1)
		printf("False cannot be formed\n");
	else
		printf("can be formed\n");

}

int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	//scanf(%d %d&x2,&y2);
	two_triangle(x1,y1,x2,y2);
	return 0;

}