/*Day 28, the concept of static variables*/
#include <stdio.h>
#include <stdlib.h>

int f()
{
    static int a=40;
    printf("In function f, a=%d\n",a);
    a+=100;/*This value will be stored in RAM*/
    return 0;
}

int main()
{
    f();/*1st time, a=40*/
    f();/*2nd time, a=40+100=140*/
    f();/*3rd time, a=140+100=240*/
    system("pause");
    return 0;
}