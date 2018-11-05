#include<stdio.h>
int gcd(int Divisor,int Dividend)
{
    if(Dividend==0)
        return Divisor;
    else
        return (gcd(Dividend,Divisor%Dividend));
}
int main()
{
    int size,rotation;
    scanf("%d %d",&size,&rotation);
    int arr[size],i,iptr,jptr,temp,jugIndex=-1;
    for(i=0;i<size;scanf("%d",&arr[i++]));
    int lim = gcd(size,rotation);


    for(iptr=0;iptr<lim;iptr++)
    {
        jptr = iptr;
        temp = arr[jptr];

        while(1)
        {
         jugIndex = (jptr+rotation)%size;
            if(jugIndex==iptr)
                break;
         arr[jptr] = arr[jugIndex];
         jptr = jugIndex;

        }
        arr[jptr] = temp;
    }
    for(i=0;i<size; printf("%d ",arr[i++]));

    return 0;
}
