/*Day 33, find the biggest and lowest value in
an array*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int stat[5]={37,43,32,29,22};
    int i,max,min;
    min=max=stat[0]; /*In order to see how it changes*/

    printf("Before: min=%d \t max=%d\n",min,max);

    for(i=0;i<=4;i++)
    {
        if(stat[i]>max)
            max=stat[i];
        if(stat[i]<min)
            min=stat[i];
    }
    printf("After: min=%d \t max=%d\n",min,max);
    system("pause");
    return 0;
}