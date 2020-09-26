/*Day 31, sum of 2^(-k) for k from 1~n*/
#include <stdio.h>
#include <stdlib.h>

double f(int n)
{
    int i;
    double y=1;
    for(i=1;i<=n;i++)
        y=y/2;
    return y;
}

double sigma(int n)
{
    int i;
    double sum=0;
    for(i=1;i<=n;i++)
        sum=sum+f(i);
    return sum;
}

int main()
{
    int x;
    double y;
    printf("Give me a positive integer.\n");
    scanf("%d",&x);
    y=sigma(x);
    printf("sum=%.12lf\n",y);
    system("pause");
    return 0;
}