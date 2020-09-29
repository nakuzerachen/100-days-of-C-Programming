/*Day 34, unknown quantity of elements in an array*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    int score[MAX];
    int i=0,sum=0;
    printf("Type in the grade, press 0 to exit.\n");
    do
    {
        printf("Grade:");
        scanf("%d",&score[i]);
    }   while(score[i++]>0);

    int num=i-1;
    for(i=0;i<num;i++)
        sum+=score[i];
    printf("Average Score is : %.3f\n",(float)sum/num);
    system("pause");
    return 0;
}