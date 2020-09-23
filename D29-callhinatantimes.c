/*Day 29, use a function print "Hello Hinata." several times*/
#include <stdio.h>
#include <stdlib.h>

int hinata(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Hello, Hinata.\n");
    }
    return 0;
}

int main(){
    int i,n;
    printf("Give me a positive integer.\n");
    scanf("%d",&n);
    hinata(n);
    system("pause");
    return 0;
}