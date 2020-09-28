/*Day 33, input and output element in an array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score[5],i;
    for(i=0;i<=4;i++)
    {
        printf("Type in the value of score[%d]:",i);
        scanf("%d",&score[i]);
    }
    
    for(i=0;i<=4;i++)
        printf("score[%d]=%d\n",i,score[i]);
    
    system("pause");
    return 0;
}