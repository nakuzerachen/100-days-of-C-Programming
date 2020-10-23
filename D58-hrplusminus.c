/*Day 58 - The Ratio of Positive, Negative and 0 in an Array*/
#include <stdio.h>
#include <stdlib.h>

void plusMinus(int arr_count, int* arr) 
{
    double res[3];
    int i,cpos=0,c0=0,cneg=0;
    for(i=0;i<arr_count;i++)
    {
        if(*(arr+i)>0)
            cpos++;
        else if(*(arr+i)<0)
            cneg++;
        else
            c0++;
    }

    res[0]=(double)cpos/arr_count;
    res[1]=(double)cneg/arr_count;
    res[2]=(double)c0/arr_count;

    for(i=0;i<3;i++)
        printf("%.6lf\n",res[i]);
}

int main()
{
    int A[10]={-3,4,3,-8,3,0,-32,21,3,3};
    plusMinus(10,A);
    system("pause");
    return 0;
}