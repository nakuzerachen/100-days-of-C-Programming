/*Day 39, set values for each element in an array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5]={2,3,1,7,9};
    int i;
    for(i=0;i<5;i++)
        printf("A[%d]=%d\n",i,A[i]);

    printf("\nThe size of array A is %d bytes.\n",sizeof(A));

    system("pause");
    return 0;
}