/*Day 35, making 2D arrays*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stock[2][4]={{49,60,77,89},
                     {65,58,50,52}};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
            printf("stock[%d][%d]=%d\t",i,j,stock[i][j]);
    
    printf("\n");
    }
    system("pause");
    return 0;
}