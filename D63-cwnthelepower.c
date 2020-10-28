/*Day 63 - Codewars:Find the Square of the nth Element in an Array*/
#include <stdio.h>
#include <stdlib.h>

int indexpower(int *array, int size, int n)
{
    if(n<size)
        return *(array+n)**(array+n);
    else
        return -1;
}

int main()
{
    int A[4]={1,3,10,100};
    int n;
    printf("Give me an integer.\n");
    scanf("%d",&n);
    printf("Return=%d\n",indexpower(A,4,n));
    system("pause");
    return 0;
}