/*Day 12, kilometer to mile converter*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float km,mi;
    printf("Please type in the length in kilometer form.\n");
    scanf("%f",&km);
    mi=km/1.6;
    printf("%4.2f km = %4.2f miles\n",km,mi);
    system("pause");
    return 0;
}