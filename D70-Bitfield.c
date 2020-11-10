/*Day 70 - Bit Fields*/
#include <stdio.h>

int main()
{
    struct status
    {
        unsigned gender:1;
        unsigned age:7;
        unsigned marriage:1;
        unsigned study:2;
    };
    struct status Jack={1,16,0,2};

    printf("Jack\n");

    if(Jack.gender==1)
        printf("Gender:Male\n");
    else
        printf("Gender:Female\n");

    printf("Age=%d\n",Jack.age);

    if(Jack.marriage==1)
        printf("Married:Yes\n");
    else
        printf("Marriage:No\n");
    
    switch(Jack.study)
    {
        case 0:
            printf("Degree:Elementary School.\n");
            break;
        case 1:
            printf("Degree:Middle School.\n");
            break;
        case 2:
            printf("Degree:High School.\n");
            break;
        case 3:
            printf("Study Degree:University or Above.\n");
            break;
    }

    printf("Sizeof(Jack)=%d\n",sizeof(Jack));
    return 0;
}

