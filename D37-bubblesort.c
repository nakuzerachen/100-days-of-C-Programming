/*Day 37, use bubble sort to arrange numbers in order*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count,temp;
    int A[5]={64,32,54,15,43};
    printf("Before arranging:");
    for(i=0;i<5;i++)
        printf("A[%d]=%d  ",i,A[i]);
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        count++;
        }
    }
    printf("\nAfter arranging:");
    for(i=0;i<5;i++)
        printf("A[%d]=%d  ",i,A[i]);
    printf("\nSorting times:%d\n",count);
    system("pause");
    return 0;
}