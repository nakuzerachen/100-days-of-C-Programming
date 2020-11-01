/*Day 66 - Linked List*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; //A pointer that stores the next NODE
};

typedef struct node NODE; //NODE=struct node

int main()
{
    NODE a,b,c;
    NODE *ptr=&a;

    a.data=12;
    a.next=&b;
    b.data=30;
    b.next=&c;
    c.data=64;
    c.next=NULL;

    while(ptr!=NULL)
    {
        printf("Address=%p, ",ptr);
        printf("data=%d, ",ptr->data);
        printf("next=%p\n",ptr->next);
        ptr=ptr->next;
    }

    system("pause");
    return 0;
}