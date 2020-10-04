/*Day 39, sheet of salesman 1,2,3*/
#include <stdio.h>
#include <stdlib.h>

int price(int n)
{
    switch(n)
    {
        case 1:
            return 12;
            break;
        case 2:
            return 16;
            break;
        case 3:
            return 10;
            break;
        case 4:
            return 14;
            break;
        case 5:
            return 15;
            break;
        default:
            return 0;
    }
}

int main()
{
    int sales[3][5]={{33,32,56,45,33},
                     {77,33,68,45,23},
                     {43,55,43,67,65}};
    int i,j,sprofit[3],pprofit[5];
    
    printf("Spreadsheet of sales:");
    printf("Each row for one salesman, ");
    printf("each column for one product.\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("sales[%d][%d]=%d\t",i,j,sales[i][j]);
            //print out the sheet
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<3;i++)
    {
        sprofit[i]=12*sales[i][0]+16*sales[i][1]+
                   10*sales[i][2]+14*sales[i][3]+
                   15*sales[i][4];
        //compare each salesman's profit
        printf("Salesman %d:$%d\n",i+1,sprofit[i]);
    }

    printf("\n");

    for(j=0;j<5;j++)
    {
        pprofit[j]=price(j+1)*(sales[0][j]+sales[1][j]+sales[2][j]);
        //calculate each product's profit
        printf("Product %c's profit:%d\n",j+65,pprofit[j]);
    }
    
    printf("\n");

    int smax,smin,pmax,pmin,bests=0,leasts=0,bestp=0,leastp=0;
    smax=smin=sprofit[0];
    pmax=pmin=pprofit[0];

    for(i=0;i<3;i++)
    {
        if(sprofit[i]>smax)
        {
            smax=sprofit[i];
            bests=i;
        }

        if(sprofit[i]<smin)
        {
            smin=sprofit[i];
            leasts=i;
        }
    }
    printf("The best salesman is No.%d:$%d\n",bests+1,smax);
    printf("The worst salesman is No.%d:$%d\n",leasts+1,smin);

    printf("\n");

    for(j=0;j<5;j++)
    {
        if(pprofit[j]>pmax)
        {
            pmax=pprofit[j];
            bestp=j;
        }

        if(pprofit[j]<pmin)
        {
            pmin=pprofit[j];
            leastp=j;
        }
    }
    printf("The best product is %c:$%d\n",bestp+65,pmax);
    printf("The worst product is %c:$%d\n",leastp+65,pmin);

    system("pause");
    return 0;
}