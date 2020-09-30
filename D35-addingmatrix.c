/*Day 35, matrix adding*/
#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COLUMN 3

int main()
{
    int A[ROW][COLUMN]={{2,4,7},
                        {5,3,9}};
    int B[ROW][COLUMN]={{4,9,14},
                        {1,7,3}};
    int i,j;
    printf("A+B=\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
            printf("%d\t",A[i][j]+B[i][j]);

        printf("\n");
    }
    system("pause");
    return 0;
}