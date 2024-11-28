#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;
    struct Node* next;     
};

void linkedlist_Traversing(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d \t",ptr->data);
        ptr = ptr->next;
    }    
}

int main()
{
    struct Node *head,*newnode;
    head = (struct Node*) malloc(sizeof(struct Node));
    head = NULL;

    top:
    newnode = (struct Node*) malloc(sizeof(struct Node)); 
    printf("Enter to be inserted in the Node : ");
    scanf("%d",&newnode->data);
    head->next = newnode;
    
    
    printf("Again or not : ");
    int again;

    if(again==0)
    {
        goto top;
    }

    linkedlist_Traversing(head);

    return 0;
}

    /* insertion at first linkedlist element (Case - 1 :):
    head = insert_at_first(head,56);
    head = insert_at_first(head,76);
    head = insert_at_first(head,86);
    */

    /* insertion indexed element or in-between element (Case - 2 :) :
    head = insert_at_index(head,166,2);
    head = insert_at_index(head,203,4);
    */

    /* Insertion at the end  (Case - 3 :):
    head = insert_at_end(head,90);
    head = insert_at_end(head,99);
    */

    /*Isertion after node (Case - 4    :):
    head = insert_after_node(head,second,45);
    head = insert_after_node(head,third,45);
    */