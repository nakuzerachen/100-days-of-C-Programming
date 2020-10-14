/*Day 50 - Print a String from its Nth character to the end*/
#include <stdio.h>
#include <stdlib.h>

int display(char *ptr, int n)
{
    ptr=ptr+n-1;
    puts(ptr);
    return 0;
}

int main()
{
    char str[32];
    char *ptr=str;
    int n;
    printf("Please input a string.\n");
    gets(ptr);
    printf("Give me an integer.\n");
    scanf("%d",&n);
    printf("Before:");
    display(ptr,1);
    printf("After:");
    display(ptr,n);
    system("pause");
    return 0;
}