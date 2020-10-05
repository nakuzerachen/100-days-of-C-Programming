/*Day 40, RGB pixel matrices adding*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 255
#define MIN 0

int main()
{
    int RGB[3][4][5]={{{247, 67, 32,187,240},
                       {122, 41, 21, 16,154},
                       { 52, 35, 79, 21, 93},
                       { 27, 22, 35,154, 75}},

                       {{ 14,145,132, 25, 40},
                        {212,221,121, 54, 14},
                        {132,235,178, 19, 14},
                        {122,122,133, 54, 47}},
                        
                        {{ 17, 44, 32,127,240},
                         { 22,231, 21,156,124},
                         { 32,355, 78, 21,156},
                         {127, 22, 33, 54, 45}}};
    int y,z;
    int sumr[4][5],subg[4][5];
    for(y=0;y<4;y++)
    {
        for(z=0;z<5;z++)
        {
            sumr[y][z]=RGB[0][y][z]+30;

            if(sumr[y][z]>MAX)
                sumr[y][z]=MAX;

            printf("sumr[%d][%d]=%d\t",y,z,sumr[y][z]);
        }
        printf("\n");
    }
    
    printf("\n");

    for(y=0;y<4;y++)
    {
        for(z=0;z<5;z++)
        {
            subg[y][z]=RGB[1][y][z]-30;

            if(subg[y][z]<MIN)
                subg[y][z]=MIN;

            printf("subg[%d][%d]=%d\t",y,z,subg[y][z]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}