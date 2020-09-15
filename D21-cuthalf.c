/*Day 21, cutting half and half*/
#include <stdio.h>

int main()
{
    int i=0;
    float leng=3000;
    while(leng>5)
    {
        leng=leng/2;
        i++;
        printf("i=%d,length=%.4f\n",i,leng);
    }
    printf("\ni=%d,length<=5\n",i);
    return 0;
}