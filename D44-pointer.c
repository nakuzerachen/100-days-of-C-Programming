/*Day 44, a basic introduction of pointers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=17;
    int *ptr=&num;
    printf("num=%d, address:%p\n",num,&num);
    printf("*ptr=%d, ptr=%p, &ptr=%p\n",*ptr,ptr,&ptr);
    system("pause");
    return 0;
}