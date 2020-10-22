/*Day 57 - Find the Smallest Number in an Array*/
#include <stdlib.h>

int smallest(int *matr, size_t leng)
{
    int min=*matr;
    unsigned i;
    for(i=0;i<leng;i++)
    {
        if(*(matr+i)<min)
            min=*(matr+i);
    }
    return min;
}