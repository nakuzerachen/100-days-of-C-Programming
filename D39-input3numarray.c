/*Day 39, input three numbers in an array
and print them out*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Give me the value of A[%d]:",i);
        scanf("%d",&A[i]);
    }
    
    printf("\n");

    for(i=0;i<3;i++)
        printf("A[%d]=%d\n",i,A[i]);

    system("pause");
    return 0;
}