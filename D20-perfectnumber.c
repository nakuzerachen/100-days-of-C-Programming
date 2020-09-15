/*Day 20, perfect number*/
/*A perfect number is that the sum of its divisors(except itself) is itself*/
#include <stdio.h>

int main()
{
    int i,j,sum=0;
    for(i=1;i<=1000;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                sum+=j; 
        }
        if(sum-i==i)
            printf("%d is a perfect number.\n",i);
        sum=0;/*Reset the sum to 0*/
    }
    return 0;
}