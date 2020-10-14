/*Day 49 - Use Pointer to Add 10 to all Elements in 1D Array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={34,76,33,42,76};
    int i,*P;
    P=arr;
    printf("Before:");
    for(i=0;i<5;i++)
        printf("*(P+%d)=%d  ",i,*(P+i));
    printf("\n");

    for(i=0;i<5;i++)
        *(P+i)=*(P+i)+10;

    printf("After:");
    for(i=0;i<5;i++)
        printf("*(P+%d)=%d  ",i,*(P+i));
    printf("\n");
    
    system("pause");
    return 0;
}