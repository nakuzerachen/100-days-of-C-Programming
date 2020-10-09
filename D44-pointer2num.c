/*Day 44, one pointer, two numbers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=17,b=99,*ptr;
    
    ptr=&a;
    printf("a=%d, address:%p, ",a,&a);
    printf("*ptr=%d, ptr=%p, &ptr=%p\n",*ptr,ptr,&ptr);

    ptr=&b;
    printf("b=%d, address:%p, ",b,&b);
    printf("*ptr=%d, ptr=%p, &ptr=%p\n",*ptr,ptr,&ptr);
    system("pause");
    return 0;
}