/*Day 57 - Codewar:Invert Value*/
#include <stdio.h>
#include <stdlib.h>

int invert(int *values, size_t values_size)
{
    int i;
    for(i=0;i<values_size;i++)
        *(values+i)=-*(values+i);
    return 0;
}

int main()
{
    int A[5]={4,5,-2,-4,1};
    int i;
    invert(A,5);
    for(i=0;i<5;i++)
        printf("%d\t",A[i]);
    printf("\n");
    system("pause");
    return 0;
}
