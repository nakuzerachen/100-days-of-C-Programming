/*Day 45, be careful of the data type of pointers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=100,*ptra;
    float b=3.14,*ptrb;
    ptra=&b, ptrb=&a;
    printf("a=%d,*ptra=%d\n",a,*ptra);
    printf("b=%f,*ptrb=%f\n",b,*ptrb);
    system("pause");
    return 0;
}