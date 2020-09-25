/*Day 30, absolute value of x*/
#include <stdio.h>
#include <stdlib.h>
#define ABS(x) x>0?x:-x

int main()
{
    double x;
    printf("Give me a real number.\n");
    scanf("%lf",&x);
    printf("|%lf|=%.6f\n",x,ABS(x));
    system("pause");
    return 0;
}