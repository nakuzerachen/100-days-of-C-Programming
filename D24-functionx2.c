/*Day 24, function of x^2*/
#include <stdio.h>
#include <stdlib.h>

int f(int x)
{
    int y;
    y=x*x;
    return y;
}

int main(){
    int x,y;
    printf("Give me an integer x.\n");
    scanf("%d",&x);
    y=f(x);
    printf("%d^2=%d\n",x,y);
    system("pause");
    return 0;
}