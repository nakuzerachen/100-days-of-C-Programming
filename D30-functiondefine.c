/*Day 30, define a polynomial*/
#include <stdio.h>
#include <stdlib.h>
#define f(x) 4*(x*x)+6*(x)-5

int main()
{
    double x,y;
    printf("Give me a real number.\n");
    scanf("%lf",&x);
    y=f(x);
    printf("4(x^2)+6x-5=%.10lf\n",y);
    system("pause");
    return 0;
}