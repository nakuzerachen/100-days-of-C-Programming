/*Day 54 - Q2:The Date Format in a Structure*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    }holiday={1995,10,31},festival;

    printf("Please input one date(yyyy/mm/dd). Use slashes(/) to separate.\n");
    scanf("%d/%d/%d",&festival.year,&festival.month,&festival.day);

    printf("Holiday=%02d/%02d/%4d\n",holiday.month,holiday.day,holiday.year);
    printf("Festival=%02d/%02d/%4d\n",festival.month,festival.day,festival.year);
    
    system("pause");
    return 0;
}