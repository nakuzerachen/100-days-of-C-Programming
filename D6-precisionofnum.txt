/*Day 6, precision of number-30000.1+0.0004*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    double x,y;/*If x and y are set in float, their sum will not be correct*/
    x=30000.1;
    y=0.0004;
    printf("x+y=%f\n",x+y);
    system("pause");
    return 0;
}