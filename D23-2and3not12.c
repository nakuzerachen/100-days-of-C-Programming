/*Day 23, numbers who have 2 and 3*/
/*as their divisors, but don't have the divisor 12*/
#include <stdio.h>

int main(){
    int i;
    for(i=2;i<=100;i++)
    {
        if(i%6==0 && i%12!=0)
            printf("%d\n",i);
    }
    return 0;
}