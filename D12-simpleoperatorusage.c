/*Day 12, the combination of different simple operator notions*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=59,b=54;
    printf("Before calculation, a=%d, b=%d\n",a,b);
    a*=b--;
    printf("After calculation, a=%d, b=%d\n",a,b);
    system("pause");
    return 0;
}