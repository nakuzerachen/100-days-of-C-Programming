/*Day 56 - Choose Enumeration Data (RGB & rgb)*/
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
        if(key==66||key==71||key==82)
            key=key+32;
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