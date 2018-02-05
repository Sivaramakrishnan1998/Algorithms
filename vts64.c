#include <stdio.h>
#include<stdlib.h>
typedef struct
{
    int n;
    char *arr;
}Bill;

int vottingfn(Bill *);
int deallocate(Bill *);

int vottingfn(Bill *sp)
{
    int b=0,nb=0,cc=0,tot,i;
    scanf("%d",&sp->n);
    sp->arr = (char *)malloc(sizeof(char)*sp->n);
    for(i=0;i<sp->n;i++)
    {
        scanf("%s",&sp->arr[i]);
        if(sp->arr[i]=='1')

            b+=1;
        else if(sp->arr[i]=='0')
            nb++;
        else
           cc++;

    }
    tot = b + nb;
    tot = (2/3)* tot;
    if(b>=tot)
    printf("Passed\n");
    else
    printf("Rejected\n");

    return 0;
}
int deallocate(Bill *sp)
{
    if(sp->arr==NULL)
    free(sp->arr);
    return 0;
}






int main() {
	//code
	Bill bl;
	vottingfn(&bl);
	deallocate(&bl);
	return 0;
}
