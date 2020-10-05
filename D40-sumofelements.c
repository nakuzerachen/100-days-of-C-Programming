/*Day 40, calculate the summation of elements
in a multidimensional array*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4][2][3]={{{4,3,6},
                     {5,6,10}},
                     {{11,4,7},
                      {4,1,6}},
                     {{9,1,8},
                      {1,2,8}},
                     {{4,2,7},
                      {8,1,5}}};
    
    int i,j,k,sum=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
                sum+=A[i][j][k];
        }
    }
    printf("The sum of all elements is %d.\n",sum);
    system("pause");
    return 0;
}