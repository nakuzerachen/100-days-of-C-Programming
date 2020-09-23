/*Day 29, calculate x^3, where x is a real number*/
#include <stdio.h>
#include <stdlib.h>

double cube(double x)
{
    double y;
    y=x*x*x;
    return y;
}

int main(){
    double x,y;
    printf("Give me a real number.\n");
    scanf("%lf",&x);
    y=cube(x);
    printf("(%lf)^3=%.10lf\n",x,y);
    system("pause");
    return 0;
}