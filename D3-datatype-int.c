/*Day 3, compare short int, long int and int*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    short int si=31415;/*short int, 2 bytes, [-32768~32767]*/
    int i=1123581321;/*int, 4 bytes, [-2147483648~2147483647]*/
    long int li=1010010012;/*long int, 4 bytes, [-2147483648~2147483647]*/
    /*si,i,li are variables, 31415,1123581321,1010010012 are constants*/
    printf("si=%d\n",si);
    printf("i=%d\n",i);
    printf("li=%d\n",li);
    system("pause");
    return 0;
}