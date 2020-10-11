/*Day 46 - The Arithmetic Operation of a Pointer*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,A[5]={4,3,9,12,13};
    for(i=0;i<5;i++)
    {   
        printf("A[%d]=%d,*(A+%d)=%d\t",i,A[i],i,*(A+i));//value
        printf("&A[%d]=%p,(A+%d)=%p\n",i,&A[i],i,(A+i));//address
    }
    system("pause");
    return 0;
}