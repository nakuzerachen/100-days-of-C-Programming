/*Day 35, sell of a year*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sale[2][4]={{34,64,22,30},
                    {45,45,65,36}};
    int i,j,sum=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
            printf("Saleman %d Q%d sell:%d\n",i+1,j+1,sale[i][j]);

        printf("\n");
    }
    printf("--------\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
            sum+=sale[i][j];

        printf("Saleman %d year sell:%d\n",i+1,sum);
        sum=0;    
    }
    system("pause");
    return 0;
}