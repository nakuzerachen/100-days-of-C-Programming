/*Day 31, taylor polynomial x^k/k!*/
#include <stdio.h>
#include <stdlib.h>

double power(double x,int n)
{
    int i;
    double y=1;
    for(i=1;i<=n;i++)
        y=y*x;
    return y;
}

int fac(int n)
{
    int i;
    if(n>0)
        return n*fac(n-1);
    else
        return 1;
}

double sig(double x,int n)
{
    double sum=0;
    int i;
    for(i=1;i<=n;i++)
        sum=sum+power(x,i)/fac(i);
    return sum;
}

int main()
{
    double x,sum;
    int n;
    printf("Give me a real number x and power n");
    printf(", use a comma to separate them.\n");
    scanf("%lf,%d",&x,&n);
    sum=sig(x,n);
    printf("x=%lf,n=%d,sum=%.12lf\n",x,n,sum);
    system("pause");
    return 0;
}