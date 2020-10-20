/*Day 55 - Q3:The Time Data in a Structure*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct time
    {
        int hour;
        int minutes;
        double second;
    }start={12,32,25.49},end={15,12,17.53};

    printf("Start %d:%d:%.3lf\n",start.hour,start.minutes,start.second);
    printf("End   %d:%d:%.3lf\n",end.hour,end.minutes,end.second);

    printf("\n");
    
    struct time elapse;
    if(end.second<start.second)
    {
        elapse.second=end.second+60-start.second;
        if(end.minutes!=0)
            end.minutes=end.minutes-1;
    }
    else
        elapse.second=end.second-start.second;
    if(end.minutes<start.minutes)
    {
        elapse.minutes=end.minutes+60-start.minutes;
        if(end.hour!=0)
            end.hour=end.hour-1;
    }
    else
        elapse.minutes=end.minutes-start.minutes;

    elapse.hour=end.hour-start.hour;
    printf("Elapsed  %d:%d:%.3lf\n",elapse.hour,elapse.minutes,elapse.second);

    system("pause");
    return 0;
    
}