#include <stdio.h>
#include<math.h>
int main()
{
    int low, high, i, flag,count=0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= sqrt(low); ++i)
        {
            if(low % i == 0)
            {
                flag=1;
                break;
            }
        }

        if (flag == 0){
        count++;
           (count==1)?printf("%d", low):printf(",%d",low);

}
        ++low;
    }
printf("\n\n\n%d",count);
    return 0;
}
