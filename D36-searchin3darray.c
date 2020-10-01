/*Day 36, search for number in 3D array*/
#include <stdio.h>
#include <stdlib.h>
#define X 2
#define Y 3
#define Z 4

int main()
{
    int A[X][Y][Z]={{{3,8,2,0},
                     {6,9,14,11},
                     {6,12,4,5}},
                    {{10,12,3,1},
                     {16,21,17,4},
                     {12,8,4,5}}};
    int i,j,k;
    int min=A[0][0][0],max=A[0][0][0];
    for(i=0;i<X;i++)
    {
        for(j=0;j<Y;j++)
        {
            for(k=0;k<Z;k++)
            {
                printf("A[%d][%d][%d]=%d\t",i,j,k,A[i][j][k]);
                if(A[i][j][k]>max)
                    max=A[i][j][k];
                if(A[i][j][k]<min)
                    min=A[i][j][k];
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Max=%d, Min=%d\n",max,min);
    system("pause");
    return 0;
}