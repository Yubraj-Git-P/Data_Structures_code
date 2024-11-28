// Linkedlist Creation and traversing :
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // self referencing structure
};

// Traversing + printing
void linkedlisttraversing(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Insertion of elememnt at first :
struct node *insert_at_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// Insertion of element at index :
struct node *insert_at_index(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Insertion of element at end :
struct node *insert_at_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// Insertion after a node :
struct node *insert_after_node(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main()
{
    struct node *head,*second,*third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = NULL;

    printf("Before linkedlist insertion : \n");

    linkedlisttraversing(head);

    printf("\n");

    //----->  Menu_driven program for Linked_List insertion :
    int choice,num,index;
    while (choice != 0)
    {
        printf("Linked list insertion : \n ");
        printf("--1). Insertion at the first element----\n");
        printf("--2). Insertion at the last element----\n");
        printf("--3). Insertion at the indexed element----\n");
        printf("--4). Exiting.....()----\n\n");

        printf("Input your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("Input number to insert at first :");
            scanf("%d", &num);
            head = insert_at_first(head, num);
            break;

        case 2:

            printf("Input number to insert at end :");
            scanf("%d", &num);
            head = insert_at_end(head, num);
            break;

        case 3:

            printf("Input number and index to insert :");
            scanf("%d", &num);
            scanf("%d", &index);
            head = insert_at_index(head, num, index);
            break;

        default:
            printf("Invalid Option !");
        }
    }
    

    printf("After linkedlist insertion : \n");
    linkedlisttraversing(head);

    return 0;
}