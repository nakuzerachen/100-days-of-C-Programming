/*Day 54 - Q2:The Date Format in a Structure(Using Typedef)*/
#include <stdio.h>
#include <stdlib.h>

struct date
{
    int year;
    int month;
    int day;
};

typedef struct date DATE;

int display(DATE d1)
{
    printf("%02d/%02d/%4d\n",d1.month,d1.day,d1.year);
    return 0;
}

int main()
{
    DATE holiday={1995,10,31},festival;

    printf("Please input one date(yyyy/mm/dd). Use slashes(/) to separate.\n");
    scanf("%d/%d/%d",&festival.year,&festival.month,&festival.day);
    
    printf("Holiday:");
    display(holiday);

    printf("Festival:");
    display(festival);
    
    system("pause");
    return 0;
}