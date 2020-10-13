/*Day 48 - The Relevance between 2D Arrays and Pointer to Pointers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num[3][4];

    printf("num=%p\n",num);
    printf("&num=%p\n",&num);
    printf("*num=%p\n",*num);

    printf("\n");

    for(i=0;i<3;i++)
        printf("num[%d]=%p\n",i,num[i]);
    
    printf("\n");

    for(i=0;i<3;i++)
        printf("&num[%d]=%p\n",i,&num[i]);
    
    system("pause");
    return 0;
}