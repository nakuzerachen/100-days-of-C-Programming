/*Day 52 - Pointer Arithmetics in Structures*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main()
{
    struct data
    {
        char name[25];
        int eng;
        int math;
    }student[MAX]={{"Jack",97,82},{"Sam",96,98},{"Kelly",93,70}};

    int i,m,n,indexm=0,indexe=0;
    m=student->math;
    n=student->eng;
    for(i=0;i<MAX;i++)
    {
        if((student+i)->math > m)
        {
            m=(student+i)->math;
            indexm=i;
        }

        if((student+i)->eng > n)
        {
            n=(student+i)->eng;
            indexe=i;
        }
    }

    printf("%s has the highest English grade, %d points\n",(student+indexe)->name,(student+indexe)->eng);
    printf("%s has the highest math grade, %d points\n",(student+indexm)->name,(student+indexm)->math);

    system("pause");
    return 0;
}