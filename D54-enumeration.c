/*Day 54 - Enumeration Data Type*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum color{red,green,blue};
    enum color shirt,hat;

    printf("The size of shirt=%d\n",sizeof(shirt));
    printf("red=%d,green=%d,blue=%d\n",red,green,blue);

    shirt=blue;
    if(shirt==blue)
        printf("You've chosen blue shirt.\n");
    else
        printf("You've chosen non-blue shirt.\n");
    
    system("pause");
    return 0;
}