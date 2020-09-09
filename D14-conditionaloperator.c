/*Day 14, conditional operator ? : statement*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float x,y,larger;
    printf("Please give me a number x.\n");
    scanf("%f",&x);
    printf("Please give me a number y.\n");
    scanf("%f",&x);
    x>y ? (larger=x) : (larger=y);
    printf("%f is bigger.\n",larger);
    system("pause");
    return 0;
}