/*Day 14, nested if in score interval*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float score;
    printf("How was your physics test last time?\n");
    scanf("%f",&score);
    if(score>0)
        if(score<60)
        {
            printf("You failed!\n");
        }
        else /*else pairs with the nearest if*/
        {
            printf("Not bad.\n");
        }
    else
    {
        printf("Score input error!\n");
    }
    system("pause");
    return 0;
}