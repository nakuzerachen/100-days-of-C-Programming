/*Day 37 - Search the Maximum & Minimum in an 2D Array*/
#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COLUMN 4

int f(int A[][COLUMN], int B[])
{
    int i,j;
    B[0]=B[1]=A[0][0];
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            if(*(*(A+i)+j)>*(B+1))
                *(B+1)=*(*(A+i)+j);
            if(*(*(A+i)+j)<*B)
                *B=*(*(A+i)+j);
        }
    }
    printf("max=%d, min=%d\n",B[1],B[0]);
    return 0;
}

int main()
{
    int A[ROW][COLUMN]={{4,3,5,6},
                        {7,19,43,4},
                        {-3,4,-2,0},
                        {-19,4,4,56}};
    int i,j,B[2];
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
            printf("A[%d][%d]=%d  ",i,j,A[i][j]);
        
        printf("\n");
    }
    f(A,B);
    system("pause");
    return 0;
}