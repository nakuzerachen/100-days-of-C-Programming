/*Day 55 - Q4:Combine Time Data into Date Data and Print*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct time
    {
        int hour;
        int minutes;
        double second;
    };

    struct date
    {
        int year;
        int month;
        int day;
        struct time t1;
    }now={2020,10,20,{18,20,20.25}};

    printf("Time: %02d/%02d/%4d  %d:%d:%.3lf\n",now.month,now.day,now.year,now.t1.hour,now.t1.minutes,now.t1.second);

    printf("\nThe size of time is %d.\n",sizeof(now));
    system("pause");
    return 0;
}