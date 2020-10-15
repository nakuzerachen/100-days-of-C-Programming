/*Day 51 - Nested Structure*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct birth
    {
        int yr;
        int mth;
        int date;
    };

    struct data
    {
        char name[25];
        int math;
        struct birth day;
    }s1={"Jason",75,{1997,4,10}};

    printf("Student Name:%s\n",s1.name);
    printf("Birthday:%d/%d/%d\n",s1.day.yr,s1.day.mth,s1.day.date);
    printf("Math Grade:%d\n",s1.math);

    system("pause");
    return 0;
}