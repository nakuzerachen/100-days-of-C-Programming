/*Day 59 - HackerRank:Lucky Numbers*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long luckyNumbers(long a, long b) 
{
    int deg,i,j,num,count=0;
    for(i=a;i<=b;i++)
    {
        int sumT=0,sumT2=0,blT=0,blT2=0;
        num=i;
        deg=1+log10(num);
        int T[deg],T2[deg];
        for(j=0;j<deg;j++)
        {
            T[deg-j-1]=num%10;
            num=num/10;
            T2[deg-j-1]=T[deg-j-1]*T[deg-j-1];
        }

        for(j=0;j<deg;j++)
        {
            sumT+=T[j];
            sumT2+=T2[j];
        }

        printf("%d,sumT=%d,sumT2=%d,",i,sumT,sumT2);

        for(j=2;j<=sqrt(sumT);j++)
        {
            if(sumT%j==0)
                break;
        }
        if(j>sqrt(sumT)&&sqrt(sumT)!=1)
            blT=1;

        for(j=2;j<sqrt(sumT2);j++)
        {
            if(sumT2%j==0)
                break;
        }
        if(j>sqrt(sumT2)&&sqrt(sumT2)!=1)
            blT2=1;
        printf("blT=%d,blT2=%d\n",blT,blT2);

        if(blT==1&&blT2==1)
            count++;
    }
    return count;
}

int main()
{
    printf("Count(1,20)=%d\n",luckyNumbers(1,20));
    system("pause");
    return 0;
}