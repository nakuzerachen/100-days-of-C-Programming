/*Day 6, the usage of % in prinf() function*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int p,q,r;
    p=113456773;
    q=31900;
    r=5000;
    printf("JPY$%10d\n",p);/*10 after % is a modifier, which means the width is 10*/
    printf("NTD$%10d\n",q);
    printf("USD$%10d\n",r);
    system("pause");
    return 0;
}