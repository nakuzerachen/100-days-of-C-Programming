/*Day 24, absolute value function*/
#include <stdio.h>
#include <stdlib.h>

float g(float x)
{
    double y;
    if(x>=0)
        y=x;
    else
        y=-x;
    return y;
}

int main()
{
    float x;
    double y;
    printf("Give me a real number x.\n");
    scanf("%f",&x);
    y=g(x);
    printf("|x|=%f\n",y);
    system("pause");
    return 0;
}