/*Day 58 - HackerRank:Difference of Two Lines in an Array*/
#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) 
{
    int i,j,pri=0,scd=0,dif=0;
    for(i=0;i<arr_rows;i++)
        pri+=*(*(arr+i)+i);
    for(i=0;i<arr_rows;i++)
        scd+=*(*(arr+i)+(arr_rows-1-i));
    dif=pri-scd;
    if(dif<0)
        return -dif;
    else
        return dif;
}

int main()
{
    int dfc;
    int A[3][3]={{13,-4,-3},{3,5,2},{-9,-3,-12}};
    dfc=diagonalDifference(3,3,A);
    printf("Dfc=%d\n",dfc);
    system("pause");
    return 0;
}