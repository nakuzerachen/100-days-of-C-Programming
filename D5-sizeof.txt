/*Day 5, use sizeof to look up the size of data*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    char ch;
    double re;
    printf("sizeof(4L)=%d bytes\n",sizeof(4L));
    printf("sizeof(x)=%d bytes\n",sizeof(x));
    printf("sizeof(ch)=%d bytes\n",sizeof(ch));
    printf("sizeof(re)=%d bytes\n",sizeof(re));
    printf("sizeof(long)=%d bytes\n",sizeof(long));
    printf("sizeof(short)=%d bytes\n",sizeof(short));
    printf("sizeof(float)=%d bytes\n",sizeof(float));
    system("pause");
    return 0;
}