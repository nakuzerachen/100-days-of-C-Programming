/*Day 34, set the maximum elements of an array*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(){
    int score[MAX];
    int i=0,sum=0;
    int num;

    printf("Type in the grade, press 0 to exit.\n");
    do
    {
        if(i==MAX)
        {
            printf("No more space for input.\n");
            i++; /*Add 1 to i first, then subtract*/
            break;
        }
        printf("Grade:");
        scanf("%d",&score[i]);
    }   while(score[i++]>0);

    num=i-1;
    for(i=0;i<num;i++)
        sum+=score[i];
    printf("AVG=%.3f\n",(float)sum/num);
    system("pause");
    return 0;
}