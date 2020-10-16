/*Day 52 - Pointers Point to Structures*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data
    {
        char name[25];
        int phy;
        int math;
        int eng;
    }student,*ptr;

    ptr=&student;
    printf("Name:");
    gets(ptr->name);//input student.name, which is the same as ptr->name
    printf("Math score:");
    scanf("%d",&ptr->math);
    printf("English score:");
    scanf("%d",&ptr->eng);
    printf("Physics score:");
    scanf("%d",&ptr->phy);

    printf("Math score=%d\n",ptr->math);
    printf("English score=%d\n",ptr->eng);
    printf("Physics score:%d\n",ptr->phy);
    printf("Average=%.3f\n",(ptr->math + ptr->eng + ptr->phy)/3.0);

    system("pause");
    return 0;
}