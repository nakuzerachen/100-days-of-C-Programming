/*Day 20, calculate the sum of numbers in 1~100 which*/
/*are the times of 3 and 8 */
#include <stdio.h>

int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%24==0)
        {
            sum+=i;
            printf("i=%d,sum=%d\n",i,sum);
        }
    }
    printf("\n\nsum=%d\n",sum);
    return 0;
}