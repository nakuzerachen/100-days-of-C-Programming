/*Day 67 - Create List*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *createList(int *arr, int len)
{
    int i;
    NODE *first,*current,*previous;
    for(i=0;i<len;i++)
    {
        current=(NODE *)malloc(sizeof(NODE));
        current->data=arr[i];
        if(i==0)
            first=current;
        else
            previous->next=current;
        current->next=NULL;
        previous=current;
    }
    return first;
}

int main()
{
    int i, arr[5]={1,2,3,4,5};
    NODE *rtn;
    rtn=createList(arr,5);
    for(i=0;i<5;i++)
        printf("&arr[%d]=%p\n",i,(arr+i));
    
    printf("Assigned address=%p\n",rtn);
    system("pause");
    return 0;
}