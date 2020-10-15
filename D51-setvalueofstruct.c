/*Day 51 - Set the Value of Structure First*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct grade
    {
        char name[25];
        int math;
        int eng;
    }s1={"Sam",98,96};

    printf("Name:%s\n",s1.name);
    printf("Math grade:%d\n",s1.math);
    printf("English grade:%d\n",s1.eng);

    system("pause");
    return 0;
}