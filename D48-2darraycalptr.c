/*Day 48 - Pointer to Pointers' Calculation in 2D Array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};
    int i,j;

    for(i=0;i<3;i++)
        printf("A+%d=%p\n",i,A+i);
    printf("\n");


    for(i=0;i<3;i++)
        printf("*(A+%d)=%p\n",i,*(A+i));
    printf("\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("*(A+%d)+%d=%p\t",i,j,*(A+i)+j);
            printf("*(*(A+%d)+%d)=%d\n",i,j,*(*(A+i)+j));
        }
    }
    system("pause");
    return 0;
}