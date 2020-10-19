/*Day 54 - Choose Enumeration Data*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char key;

    enum color
    {
        red=114,//ASCII of r
        green=103,//ASCII of g
        blue=98//ASCII of b
    }hat;

    do
    {
        printf("Please type in r,g or b.\n");
        scanf("%c",&key);
        fflush(stdin);
    }while((key!=red)&&(key!=green)&&(key!=blue));

    hat=key;

    switch(hat)
    {
        case red:
            printf("You chose red.\n");
            break;
        case green:
            printf("You chose green.\n");
            break;
        case blue:
            printf("You chose blue.\n");
            break;
    }

    system("pause");
    return 0;
}