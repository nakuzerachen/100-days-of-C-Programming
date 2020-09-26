/*Day 31, another taylor polynomial [(-1)^k*x^(2k+1)]/(2k+1)!*/
#include <stdio.h>
#include <stdlib.h>

double up(double x,int n)
{
    int i,pos=1;
    double y=x;
    for(i=1;i<=n;i++)
    {
        pos*=(-1);
        y=y*(x*x);
    }
    return pos*y;
}

int fac(int n)
{
    int i,p=1;
    for(i=1;i<=(2*n)+1;i++)
        p=p*i;
    return p;
}

double f(double x, int n)
{
    int i;
    double frac=0;
    for(i=1;i<=n;i++)
        frac=frac+up(x,i)/fac(i);
    return frac;
}

int main()
{
    double x,re;
    int n;
    printf("Please give me a real number x and power n,");
    printf(" use a comma to separate it.\n");
    scanf("%lf,%d",&x,&n);
    re=f(x,n);
    printf("up=%lf,fac=%d\n",up(x,n),fac(n));
    printf("x=%lf,n=%d,result=%.12lf\n",x,n,re);
    system("pause");
    return 0;
}