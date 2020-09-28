/*Day 33, left value in RAM when the element of
an array exceeds its limit*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score[4];

    score[0]=76.8;
    score[1]=89.1;
    /*score[2]=17.4;*/
    score[3]=67.3;

    int i;
    for(i=0;i<=4;i++)
        printf("score[%d]=%.2f\n",i,score[i]);
    system("pause");
    return 0;
}