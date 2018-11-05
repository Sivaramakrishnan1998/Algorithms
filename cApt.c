#include <stdio.h>

int main() {
	//code

const int *p;
int e = 5;
p = &e;
int **q = &p;
printf("%d ",*p);
printf("%d ",++**q);
printf("%d ",*p);

	return 0;
}
