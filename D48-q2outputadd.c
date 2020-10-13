/*Day 48 - Output the Addresses of Variables*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double b1=3.14;
    int num=5;

    printf("b1=%lf,&b1=%p\n",b1,&b1);
    printf("num=%d,&num=%p\n",num,&num);
    
    system("pause");
    return 0;
}