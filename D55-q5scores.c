/*Day 55 - A List of Scores of Students*/
#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[25];
    int math;
}student[5];

int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Name:");
        scanf("%s",&student[i].name);
        printf("Math Score:");
        scanf("%d",&student[i].math);
    }

    printf("\n");
    int max=student->math,sum=0,index;
    for(i=0;i<5;i++)
    {
        if((student+i)->math > max)
        {   
            max=(student+i)->math;
            index=i;
        }
    }

    printf("%s got the highest score, %d points.\n",(student+index)->name,max);

    for(i=0;i<5;i++)
        sum+=(student+i)->math;
    printf("Average score=%f points.\n",(float)sum/5);

    for(i=0;i<5;i++)
    {
        if((student+i)->math < 60)
            printf("%s failed, %d points.\n",(student+i)->name,(student+i)->math);
    }

    system("pause");
    return 0;
}