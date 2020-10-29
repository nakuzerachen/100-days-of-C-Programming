/*Day 65 - Use Malloc() to Make a Structure*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[25];
        int math;
    }*ptr;

    int num,i;

    printf("The number of students:");
    scanf("%d",&num);

    ptr=(struct student*)malloc(num*sizeof(struct student));

    for(i=0;i<num;i++)
    {
        fflush(stdin);
        printf("Name of student %d : ",i);
        gets((ptr+i)->name);
        printf("Score of student %d : ",i);
        scanf("%d",&(ptr+i)->math);
    }

    for(i=0;i<num;i++)
        printf("%s:%d points\n",(ptr+i)->name,(ptr+i)->math);
    
    free(ptr);

    system("pause");
    return 0;
}