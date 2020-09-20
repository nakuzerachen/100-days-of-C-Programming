/*Day 25, polynomial function*/
/*f(x)=x^3-4x+7*/
#include <stdio.h>
#include <stdlib.h>

double f(double x)
{
    double y;
    y=(x*x*x)-(4*x)+7;
    return y;
}

int main(){
    double x,y;
    printf("Give me a real number x.\n");
    scanf("%lf",&x);
    y=f(x);
    printf("f(%lf)=%lf\n",x,y);
    system("pause");
    return 0;
}