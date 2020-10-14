/*Day 49 - The Priority of * against ++*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[]={1,0,3,4,5};
    int *p1,*p2;
    p1=p2=num;

    *p1++;
    printf("*p1=%d\n",*p1);

    (*p2)++;
    printf("*p2=%d\n",*p2);

    system("pause");
    return 0;
}