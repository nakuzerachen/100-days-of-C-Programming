/*Day 46 - Array address is the Address of its First Element*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,A[5]={32,13,4,5,9};
    printf("A=%p, ",A);
    printf("&A=%p\n",&A);

    for(i=0;i<5;i++)
        printf("&A[%d]=%p\n",i,&A[i]);

    system("pause");
    return 0;
}