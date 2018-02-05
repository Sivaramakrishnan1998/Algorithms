#include<stdio.h>
#include<stdlib.h>
float area(int x1,int y1,int x2,int y2,int x3,int y3)
{
	return abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0);
}

int inside(int x1,int y1,int x2,int y2,int x3,int y3,int p1,int p2)
{
	float A = area( x1,y1,x2,y2,x3,y3);
	float A1 = area(p1,p2,x2, y2,x3,y3);
	float A2 = area( x1, y1, p1,p2, x3,y3);
	float A3 = area(x1, y1, x2,y2, p1,p2);

	if (A==(A1+A2+A3))
	return 1;
	else
	return 0;
}

int main()
{
	int x1,y1,x2,y2,x3,y3,p1,p2;
	scanf("%d %d %d %d %d %d %d %d\n",&x1,&y1,&x2,&y2,&x3,&y3,&p1,&p2);
	if (inside(x1,y1,x2,y2,x3,y3,p1,p2))
	printf("TRUE\n");
	else
	printf("FALSE\n");
	return 0;	
}