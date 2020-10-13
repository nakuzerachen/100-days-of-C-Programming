/*Day 48 - Output the Addresses of Variables*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num=4.2f;
    int a1=4,a2=12;
    
    printf("num=%f, &num=%p\n",num,&num);
    printf("a1=%d, &a1=%p\n",a1,&a1);
    printf("a2=%d, &a2=%p\n",a2,&a2);

    system("pause");
    return 0;
}