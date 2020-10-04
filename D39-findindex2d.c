/*Day 39, find the index number of the biggest 
or smallest value in 2D array*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[3][3]={{7,3,6},
                 {9,1,8},
                 {45,8,15}};
    int i,j,max,min,valsx,valsy,valbx,valby;
    max=min=T[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(T[i][j]>max)
            {
                max=T[i][j];
                valbx=i;
                valby=j;
            }

            if(T[i][j]<min)
            {
                min=T[i][j];
                valsx=i;
                valsy=j;
            }
        }
    }

    printf("Biggest value:T[%d][%d]=%d\n",valbx,valby,max);
    printf("Smallest valuse:T[%d][%d]=%d\n",valsx,valsy,min);
    system("pause");
    return 0;
}