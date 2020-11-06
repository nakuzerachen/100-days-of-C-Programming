/*Day 69 - The Summation of Numbers is Odd or Even?*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*num,sum=0;
    printf("Give me a positive integer.\n");
    scanf("%d",&n);

    if(n==0)
    {
        num=(int *)malloc(1*sizeof(int));
        *num=0;
    }
    else
    {
        num=(int *)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
            printf("Number %d: ",i+1);
            scanf("%d", (num+i));
            sum+=*(num+i);
        }
    }
    
    if(sum%2!=0)
        printf("Sum=%d, odd.\n",sum);
    else
        printf("Sum=%d, even.\n",sum);
    
    return 0;
}