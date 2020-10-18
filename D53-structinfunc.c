/*Day 53 - A Structure in a Function*/
#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[10];
    int math;
};

int display(struct data s)
{
    printf("Name:%s\n",s.name);
    printf("Math grade:%d\n",s.math);
    return 0;
}

int main()
{
    struct data s1={"Sam",98};
    display(s1);

    system("pause");
    return 0;
}