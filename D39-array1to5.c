/*Day 39, set the elements in an array as 1~5
and print them out*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5];
    int i;
    for(i=0;i<5;i++)
        A[i]=i+1;
    
    for(i=0;i<5;i++)
        printf("A[%d]=%d\n",i,A[i]);

    system("pause");
    return 0;
}