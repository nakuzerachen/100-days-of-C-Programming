/*Day 12, mile to kilometer converter*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float mi,km;
    printf("Please type in the length in mile form.\n");
    scanf("%f",&mi);
    km=mi*1.6;
    printf("%4.2f miles = %4.2f km\n",mi,km);
    system("pause");
    return 0;
}