/*Day 68 - Insert a New Node into a List*/
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

int printList(NODE* first)
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
    int arr[]={12,43,56,34,98,76,43,24};
    NODE *first,*node;
    first=createList(arr,8);
    printList(first);

    node=searchNode(first,56);
    insertNode(node,88);
    printList(first);
    freeList(first);

    system("pause");
    return 0;    
}