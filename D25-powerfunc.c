/*Day 25, function of x^n*/
#include <stdio.h>
#include <stdlib.h>

double power(double x, int n)
{
    int i;
    double val=1.0;
    for(i=1;i<=n;i++)
        val=val*x;
    return val;
}

int main()
{
    double x,val=1.0;
    int n;
    printf("Please type in a real number x.\n");
    scanf("%lf",&x);
    printf("Give me the power of x.\n");
    scanf("%d",&n);
    val=power(x,n);
    printf("%lf^%d=%lf\n",x,n,val);
    system("pause");
    return 0;
}