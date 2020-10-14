/*Day 50 - Output Addresses, Values Using Pointers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][4]={{2,3,4,5},{6,7,8,9}};
    int i;
    printf("arr=%p\n",arr);
    printf("arr[0]=%p,arr[1]=%p\n",arr[0],arr[1]);
    printf("arr+1=%p\n",arr+1);
    printf("*(arr+0)=%p,*(arr+1)=%p\n",*(arr+0),*(arr+1));
    for(i=0;i<4;i++)
        printf("*(arr+1)+%d=%p  ",i,*(arr+1)+i);
    printf("\n");

    for(i=0;i<4;i++)
        printf("*(*(arr+1)+%d)=%d  ",i,*(*(arr+1)+i));
    printf("\n");

    system("pause");
    return 0;
}