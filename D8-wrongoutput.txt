/*Day 8, read wrong data and produce inappropriate result*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    char w;
    printf("Give me an integer.\n");
    scanf("%d",&x);/*Thw number will show properly, but you can't input a symbol.*/
    printf("Give me an alphabet or symbol.\n");
    scanf("%c",&w);
    printf("x=%d, the ASCII of %c is %d.\n",x,w,w);/*The ASCII will be 10 because of the enter key.*/
    system("pause");
    return 0;
}