/*Day 11, unary operators - +,-.!*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    printf("Give me an integer.\n");
    scanf("%d",&x);
    printf("x=%d,-x=%d,!x=%d\n",+x,-x,!x);/*If x=0, then !x=1. If x is not 0, !x=0.*/
    system("pause");
    return 0;
}