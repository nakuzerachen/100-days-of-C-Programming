/*Day 29, calulate x^2, where x is a real number*/
#include <stdio.h>
#include <stdlib.h>

double square(double x)
{
    double y;
    y=x*x;
    return y;
}

int main()
{
    double x,y;
    printf("Give me a real number.\n");
    scanf("%lf",&x);
    y=square(x);
    printf("(%lf)^2=%.10lf\n",x,y);
    system("pause");
    return 0;
}