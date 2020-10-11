/*Day 46 - Call an Array into a Function Using a Pointer*/
//Example:Replace an Element in an Array
#include <stdio.h>
#include <stdlib.h>

int replace(int *a,int e,int v)
{
    *(a+e-1)=v;
    return 0;
}

int main()
{
    int A[5]={13,42,14,77,93};
    int i,e,v;
    for(i=0;i<5;i++)
        printf("%d\t",A[i]);
    printf("\n");
    printf("Which element do you want to make changes?\n");
    scanf("%d",&e);
    printf("What is the new number?\n");
    scanf("%d",&v);
    replace(A,e,v);
    printf("\n\nFinished!\n\n");
    for(i=0;i<5;i++)
        printf("%d\t",A[i]);
    printf("\n");
    system("pause");
    return 0;
}