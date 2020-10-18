/*Day 53 - Call the Address of a Structure to a Function*/
#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[25];
    int math;
};

int swth(struct data *p1, struct data *p2)
{
    struct data tmp;
    tmp=*p1;
    *p1=*p2;
    *p2=tmp;

    return 0;
}

int main()
{
    struct data s1={"Sam",98};
    struct data s2={"Jack",82};
    swth(&s1,&s2);

    printf("After swth() is called:\n");
    printf("s1.name=%s, s1.math=%d\n",s1.name,s1.math);
    printf("s2.name=%s, s2.math=%d\n",s2.name,s2.math);

    system("pause");
    return 0;
}