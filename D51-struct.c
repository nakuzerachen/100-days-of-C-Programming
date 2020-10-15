/*Day 51 - Use a Structure*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data
    {
        char name[25];
        int math;
    };

    struct data s1;

    printf("Name: ");
    gets(s1.name);//use variable.datatype to input data
    printf("Grade: ");
    scanf("%d",&s1.math);

    printf("Name:%s\n",s1.name);
    printf("Score:%d\n",s1.math);

    system("pause");
    return 0;
}