/*Day 13, if(true) and else(false) statement*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float score;
    printf("May I know your score?\n");
    scanf("%f",&score);
    if(score>60)
        printf("You passed.\n");
    else
        printf("You messed it up!\n");
    system("pause");
    return 0;
}