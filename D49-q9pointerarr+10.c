/*Day 49 - Use Array Constant to Add 10 to Elements in 1D Array */
#include <stdio.h>
#include <stdlib.h>

int show(int arr[5])
{
    int i;
    for(i=0;i<5;i++)
        printf("*(arr+%d)=%d  ",i,*(arr+i));
    return 0;
}

int main()
{
    int arr[5]={31,17,33,22,16};
    int i;
    printf("Before:");
    show(arr);
    printf("\n");

    for(i=0;i<5;i++)
    {
        *(arr+i)=*(arr+i)+10;
    }
    printf("After:");
    show(arr);
    printf("\n");

    system("pause");
    return 0;
}