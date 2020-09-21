/*Day 27, global variable pi=3.1415926*/
#include <stdio.h>
#include <stdlib.h>

double pi=3.1415926;
int main()
{
    double r;
    printf("Give me the radius of the circle.\n");
    scanf("%lf",&r);
    printf("Area=%.12lf\n",pi*r*r);
    printf("Circumference=%.12lf\n",2*pi*r);
    system("pause");
    return 0;
}