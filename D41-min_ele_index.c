/*Day 41, the index value of the minimum index*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int idx(int arr[])
{
    int i,imin,min=arr[0];
    for(i=0;i<N;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            imin=i;
        }
    }
    return imin;
}

int main()
{
    int A[N]={4,2,4,5,-1,0,-4,4,5,6};
    printf("The minimum element is A[%d]\n",idx(A));
    system("pause");
    return 0;
}