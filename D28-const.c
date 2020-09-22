/*Day 28, use const to set constants that can't be edited*/
#include <stdio.h>
#include <stdlib.h>
const double PI=3.1415926;

double circum(double r)
{
    double l;
    l=2*PI*r;
    return l;
}

double area(double r)
{
    double a;
    a=PI*r*r;
    return a;
}

int main()
{
    double r;
    printf("What is the radius of the circle?\n");
    scanf("%lf",&r);
    printf("Circumference=%.10lf\n",circum(r));
    printf("Area=%.10lf\n",area(r));
    system("pause");
    return 0;
}