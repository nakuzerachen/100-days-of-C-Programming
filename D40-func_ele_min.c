/*Day 40, use a function to find the minimum element 
in an 1D array*/

#include <stdio.h>
#include <stdlib.h>
#define N 12
int min(int arr[])
{
    int max,min,i;
    min=arr[0];
    for(i=0;i<N;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int main()
{
    int A[]={4,10,4,5,9,13,24,32,7,9,-1,0};
    printf("The minimum element of A is %d.\n",min(A));
    system("pause");
    return 0;
}