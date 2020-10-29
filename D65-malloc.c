/*Day 65 - Using Malloc Function*/
#include <stdio.h>
#include <stdlib.h> //malloc() and free() is in stdlib.h

int main()
{
    int *ptr,i;
    ptr=(int *) malloc(3*sizeof(int));

    *ptr=40;
    *(ptr+1)=86;
    *(ptr+2)=100;

    for(i=0;i<3;i++)
        printf("*(ptr+%d)=%d\n",i,*(ptr+i));
    
    free(ptr);

    system("pause");
    return 0;
}