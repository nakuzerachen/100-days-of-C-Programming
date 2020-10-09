/*Day 44, the address of variables in RAM*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=5;
    double c=2.718;
    printf("a=%4d, sizeof(a)=%d, address:%p\n",a,sizeof(a),&a);
    printf("b=%4d, sizeof(b)=%d, address:%p\n",b,sizeof(b),&b);
    printf("c=%4.2f, sizeof(c)=%d, address:%p\n",c,sizeof(c),&c);
    system("pause");
    return 0;
}