/*Day 41, count the number of odd and even numbers*/
#include <stdio.h>
#include <stdlib.h>
#define N 10
int ocount=0,ecount=0;

int count(int arr[])
{
    int i;
    for(i=0;i<N;i++)
    {
        if(arr[i]%2==0)
            ecount++;
        else
            ocount++;
    }
    return 0;
}

int main()
{
    int A[N]={41,42,55,68,93,45,22,64,86,12};
    count(A);
    printf("The number of odd numbers:%d\n",ocount);
    printf("The number of even numbers:%d\n",ecount);
    system("pause");
    return 0;
}