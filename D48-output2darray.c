/*Day 48 - Output 2D Array Using Pointers*/\
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",*(*(num+i)+j));
        
        printf("\n");
    }
    system("pause");
    return 0;
}