/*Day 40, daily temperature spreadsheet*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float W[3][4]={{18.2,17.3,15.0,13.4},
                   {23.8,25.1,20.6,17.8},
                   {20.6,21.5,18.4,15.7}};
    int i,j,ds,db,ts,tb;
    printf("This is the temperature from");
    printf(" Day 1 to Day 4, in three different times.\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("W[%d][%d]=%.2f\t",i,j,W[i][j]);
    printf("\n");
    }

    printf("\n");

    float AVG[4]={0},AVGT[4]={0};
    for(j=0;j<4;j++)
    {
        AVG[j]=(W[0][j]+W[1][j]+W[2][j])/3;
        printf("AVG[%d]=%.4f\n",j,AVG[j]);
    }

    printf("\n");

    for(i=0;i<3;i++)
    {
        AVGT[i]=(W[i][0]+W[i][1]+W[i][2]+W[i][3])/4;
        printf("AVGT[%d]=%.4f\n",i,AVGT[i]);
    }

    printf("\n");

    float max,min;
    max=min=W[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(W[i][j]>max)
            {
                max=W[i][j];
                db=j;
                tb=i;
            }
            
            if(W[i][j]<min)
            {
                min=W[i][j];
                ds=j;
                ts=i;
            }
        }
    }
    printf("The highest temperature is %.2f, happened on time %d, day %d.\n",max,tb+1,db+1);
    printf("The lowest temperature is %.2f, happened on time %d, day %d.\n",min,ts+1,ds+1);
    system("pause");
    return 0;
}