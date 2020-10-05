/*Day 41, adding two matrices together to form 
a new matrix*/

#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COLUMN 3
int C[ROW][COLUMN]={0};

int add(int A[ROW][COLUMN],int B[ROW][COLUMN],int C[ROW][COLUMN])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {    
            C[i][j]=A[i][j]+B[i][j];
            printf("C[%d][%d]=%d\t",i,j,C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int A[ROW][COLUMN]={{3,5,7},
                        {4,5,13},
                        {9,1,8}};
    int B[ROW][COLUMN]={{8,1,5},
                        {45,4,26},
                        {17,11,19}};
    add(A,B,C);
    system("pause");
    return 0;
}