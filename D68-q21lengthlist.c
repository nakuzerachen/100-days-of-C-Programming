/*Day 68 - Determine the Length of a List*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

int listlength(NODE *first)
{
    int count=0;
    while(first->next!=NULL)
    {
        count++;
        first=first->next;
    }
    count++;//The end node will point to NULL, so it still need to be counted
    return count;
}

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
    int arr[]={12,43,56,34,98};
    NODE *first;
    first=createList(arr,5);
    printf("Length=%d\n",listlength(first));

    system("pause");
    return 0;
}