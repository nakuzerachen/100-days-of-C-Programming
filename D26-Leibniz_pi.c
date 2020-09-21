/*Day 26, Leibniz formula to approach pi*/
#include <stdio.h>
#include <stdlib.h>

double f(int n)
{
    int i,upper=-1,down=-1;
    double fraction;
    for(i=1;i<=n;i++)
    {
        upper=upper*(-1);
        down=down+2;
        fraction=(double)upper/down;
    }
    return fraction;
}

double sigma(int n)
{
    int i;
    double sum=0;
    for(i=1;i<=n;i++){
        sum=sum+f(i);
    }
    return 4*sum;
}

int main()
{
    int i,n;
    printf("Give me a positive integer n.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("f(%d)=%lf\n",i,sigma(i));
    }
    system("pause");
    return 0;
}