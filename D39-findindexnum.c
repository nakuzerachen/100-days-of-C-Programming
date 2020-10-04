/*Day 39, find the index number that has the
biggest or smallest element*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int O[5]={7,5,4,15,34};
    int i,j,max,min,valx,valy;
    max=min=O[0];

    for(i=0;i<5;i++)
    {
        if(O[i]>max)
        {
            max=O[i];
            valy=i;
        }

        if(O[i]<min)
        {
            min=O[i];
            valx=i;
        }
    }

    printf("Max value:A[%d]=%d\n",valy,max);
    printf("Min value:A[%d]=%d\n",valx,min);

    system("pause");
    return 0;
}