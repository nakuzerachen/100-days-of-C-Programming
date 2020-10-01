/*Day 37, a more efficient bubble sort*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    int A[N]={102,43,54,321,56};
    int i,j,temp,count;
    int val=0;
    printf("Before arranging:");
    for(i=0;i<N;i++)
        printf("A[%d]=%d  ",i,A[i]);
    printf("\n");

    for(i=0;i<N && (!val);i++)
    {
        val=1;
        for(j=0;j<N-1;j++)
        {
            
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                val=0;
            }
        count++;
        }
    }
    
    printf("After arranging:");
    for(i=0;i<N;i++)
        printf("A[%d]=%d  ",i,A[i]);
    printf("\nSorting times:%d\n",count);
    system("pause");
    return 0;
}