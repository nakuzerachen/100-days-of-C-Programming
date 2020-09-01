/*Day 6, modifier - sign*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float p,q,r;
    p=300.5f;
    q=273.15f;
    r=-215.3f;
    printf("p=%-6.2f\n",p);/*Minus sign will make the words lean on left side*/
    printf("q=%-6.2f\n",q);
    printf("r=%-6.2f\n",r);
    system("pause");
    return 0;
}