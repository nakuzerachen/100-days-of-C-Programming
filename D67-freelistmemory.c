/*Day 67 - Free List Memory*/
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

int printlist(NODE* first)
{
    NODE* node=first;
    if(first==NULL)
        printf("List is empty!\n");
    else
    {
        while(node!=NULL)
        {
            printf("%3d ",node->data);
            node=node->next;
        }
        printf("\n");
    }
    return 0;
}

int freeList(NODE* first)
{
    NODE *current, *tmp;
    current=first;
    while(current!=NULL)
    {
        tmp=current;
        current=current->next;
        free(tmp);
    }
    return 0;
}

int main()
{
    NODE *first;
    int arr[5]={1,2,3,4,5};
    first=createList(arr,4);
    printlist(first);
    freeList(first);
    system("pause");
    return 0;
}