/*Day 52 - Input Data to a Structure Array*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main()
{
    struct data
    {
        char name[25];
        int math;
    }student[MAX];

    int i;
    for(i=0;i<MAX;i++)
    {
        printf("Name:");
        gets(student[i].name);
        printf("Math score:");
        scanf("%d",&student[i].math);
        fflush(stdin);
    }

    for(i=0;i<MAX;i++)
    {
        printf("Name:%s  ",student[i].name);
        printf("Math Score:%d\n",student[i].math);
    }

    system("pause");
    return 0;
}