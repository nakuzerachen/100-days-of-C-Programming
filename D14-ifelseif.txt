/*Day 14, if-else-if statement*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float s;
    printf("Please type in your math score.\n");
    scanf("%f",&s);
    if(s>0)
        if(s>=90 && s<=100)
            printf("Good job, Rank A.\n");
            else if(s>=80 && s<=89)
                printf("Not bad, Rank B.\n");
                else if(s>=70 && s<=79)
                    printf("Better study more, Rank C.\n");
                    else
                        printf("You messed it up, Rank D.\n");
    else
        printf("Score input error!\n");
    system("pause");
    return 0;
}