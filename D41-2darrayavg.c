/*Day 41, the average of all elements in an 2d array*/
#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COLUMN 5

double avg(int arr[ROW][COLUMN])
{
    int i,j,sum=0;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
            sum+=arr[i][j];
    }
    return (double)sum/(ROW*COLUMN);
}

int main()
{
    int A[ROW][COLUMN]={{-41,3,8,11,12},
                        {14,1,0,13,1},
                        {1,0,-1,0,1},
                        {16,-1,0,0,1}};
    printf("The average of all elements in A is:%lf\n",avg(A));
    system("pause");
    return 0;
}