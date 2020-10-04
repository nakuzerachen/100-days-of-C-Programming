/*Day 39, find out how many elements are in an array
and determine how many numbers are between 1~6*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[]={3,5,0,3,2,4,1,6,8,5,4,3,2};
    int i,count=0,n;
    n=sizeof(A)/sizeof(int);
    printf("There are %d elements in array A.\n",n);

    for(i=0;i<n;i++)
    {
        if(A[i]>=3 && A[i]<=6)
            count++;
    }

    printf("%d elements are between 3~6.\n",count);
    system("pause");
    return 0;
}