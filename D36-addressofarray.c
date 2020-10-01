/*Day 36, the address of an array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3]={1,2,8};
    int i;
    for(i=0;i<3;i++)
        printf("A[%d]=%d, address=%p\n",i,A[i],&A[i]);

    printf("The address of A is %p\n",A);
    system("pause");
    return 0;
}