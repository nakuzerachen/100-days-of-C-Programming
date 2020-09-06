/*Day 11, using assignment operator =*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    printf("Give me an integer.\n");
    scanf("%d",&x);
    x=x+3;/*Assign x+3 to variable x, = doesn't mean equal.*/
    printf("x+3=%d\n",x);
    system("pause");
    return 0;
}