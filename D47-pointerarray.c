/*Day 47 - An Array of Pointers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr[3]={"James","Stanton","Kershaw"};
    int i;
    for(i=0;i<3;i++)
        puts(ptr[i]);//Print the String ptr[i] Represents 
    system("pause");
    return 0;
}