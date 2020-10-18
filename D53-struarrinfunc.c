/*Day 53 - A Structure Array in a Function*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct data
{
    char name[25];
    int math;
};

int max(struct data arr[])
{
    int m,i,idx;
    m=arr->math;
    for(i=0;i<MAX;i++)
    {
        if((arr+i)->math>m)
        {   
            m=(arr+i)->math;
            idx=i;
        }
    }
    return idx;
}

int main()
{
    int idx;
    struct data student[MAX]={{"Kelly",70},{"Sam",98},{"Jack",82}};
    idx=max(student);

    printf("%s has the highest score, ",(student+idx)->name);
    printf("%d points\n",(student+idx)->math);
    system("pause");
    return 0;
}