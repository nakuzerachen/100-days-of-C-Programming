/*Day 67 - Search a Particular Node*/
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

NODE *searchNode(NODE* first, int item)
{
    NODE *node=first;
    while(node!=NULL)
    {
        if(node->data==item)
            return node;
        else
            node=node->next;
    }
    return NULL;
}

int insertNode(NODE *node,int item)
{
    NODE *newnode;
    newnode=(NODE*) malloc(sizeof(NODE));
    newnode->data=item;
    newnode->next=node->next;
    node->next=newnode;
}

int main()
{
    NODE *first,*node;
    int arr[4]={1,2,4,5};
    first=createList(arr,4);
    printlist(first);

    node=searchNode(first,2);
    insertNode(node,3);
    printlist(first);
    freeList(first);
    system("pause");
    return 0;
}