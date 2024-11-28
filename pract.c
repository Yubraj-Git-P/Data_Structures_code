// Linkedlist Creation and traversing :
#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node* next;  // self referencing structure

};

void linkedlisttraversing(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is : %d\n",ptr->data);                
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    
    // Allocating memory for head (struct node*) pointer dynamically
    head = (struct node*) malloc(sizeof(struct node));
    // Allocating memory for second in (struct node*) pointer dynamically
    second = (struct node*) malloc(sizeof(struct node));
    // Allocating memory for second in (struct node*) pointer dynamically
    third = (struct node*) malloc(sizeof(struct node));

    // head is one node which have data and and a reference pointer pointing to second
    head->data = 7;
    head->next = second;

    // second is another node which have data and a reference pointer pinting to third 
    second->data = 11;
    second->next = third;

    // third is another node which have pointer and a reference pointer pointing to null meaning that at third linkedlist terminated  
    third->data = 19;
    third->next = NULL;

    linkedlisttraversing(head);
  
    return 0;
}