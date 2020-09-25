/*Day 30, average of two numbers*/
#include <stdio.h>
#include <stdlib.h>
#define AVERAGE(x,y) (x+y)/2

int main()
{
    float x,y;
    printf("Give me two numbers. Use a comma to separate them.\n");
    scanf("%f,%f",&x,&y);
    printf("The average of %f and %f is %f\n",x,y,AVERAGE(x,y));
    system("pause");
    return 0;
}