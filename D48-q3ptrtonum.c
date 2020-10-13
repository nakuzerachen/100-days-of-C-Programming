/*Day 48 - A Pointer Points to a Number*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num=12.6f,*ptr;
    ptr=&num;

    printf("num=%f,&num=%p\n",num,&num);
    printf("*ptr=%f,ptr=%p,&ptr=%p\n",*ptr,ptr,&ptr);

    system("pause");
    return 0;
}