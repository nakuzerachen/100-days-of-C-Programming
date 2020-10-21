/*Day 56 - Enumeration Boolean Number*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum boolean
    {
        FALSE,
        TRUE
    }test;
    test=5<20;//test=1
    if(test==TRUE)//if(test) is also usable
        printf("5<20 is true.\n");
    else
        printf("5>=20 is true.\n");
    
    system("pause");
    return 0;
}