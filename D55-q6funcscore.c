/*Day 55 - Q6:Using Functions to Analyze the Scores*/
#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[25];
    int math;
}student[5]={{"Aaron",67},{"Tim",34},{"Robert",58},{"Kevin",93},{"Emma",82}};

int best(struct data student[])
{
    int m=student->math,i,index;
    for(i=0;i<5;i++)
    {
        if((student+i)->math > m)
        {
            m=(student+i)->math;
            index=i;
        }
    }
    return index;
}

int failed(struct data student[])
{
    int i;
    for(i=0;i<5;i++)
    {
        if((student+i)->math < 60)
            printf("%s failed, %d points.\n",(student+i)->name,(student+i)->math);
    }
    return 0;
}

double average(struct data student[])
{
    int i,sum=0;
    for(i=0;i<5;i++)
        sum+=(student+i)->math;
    return (double)sum/5;
}

int main()
{
    int index;
    index=best(student);
    printf("%s got the highest score, %d points.\n",(student+index)->name,(student+index)->math);
    failed(student);
    printf("Average=%.3lf\n",average(student));

    system("pause");
    return 0;
}
