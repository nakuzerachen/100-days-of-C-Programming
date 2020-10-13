/*Day 48 - Square all the Elements in an 1D Array*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int square(int *arr)
{
    int i;
    for(i=0;i<5;i++)
        *(arr+i)=*(arr+i)**(arr+i);
    return 0;
}

int rev(int *arr)
{
    int i;
    for(i=0;i<MAX;i++)
        printf("*(arr+%d)=%d\t",i,*(arr+i));
    printf("\n");
    return 0;
}

int main()
{
    int S[MAX]={4,7,14,24,33};
    rev(S);
    square(S);
    rev(S);
    system("pause");
    return 0;
}