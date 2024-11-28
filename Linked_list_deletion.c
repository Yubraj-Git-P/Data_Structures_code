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

// Delete at first :
struct node *delete_at_first(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Delete at index :
struct node *delete_at_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < (index - 1); i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Delete at last :
struct node *delete_at_last(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 14;
    fourth->next = fifth;

    fifth->data = 15;
    fifth->next = sixth;

    sixth->data = 16;
    sixth->next = NULL;

    printf("Before linkedlist deletion : \n");

    linkedlisttraversing(head);

    int choice, index;

    while (choice != 0)
    {
        printf("Linked list deletion : \n ");
        printf("--1). Delete at the first element----\n");
        printf("--2). Delete at Indexed element----\n");
        printf("--3). Delete at the end element----\n");
        printf("--4). Traversing----\n\n");

        printf("Input your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            head = delete_at_first(head);
            break;

        case 2:

            printf("Input index to delete element :");
            scanf("%d", &index);
            head = delete_at_index(head, index);
            break;

        case 3:

            head = delete_at_last(head);
            break;

        case 4:
            printf("After Deletion : \n");
            linkedlisttraversing(head);
            break;

        default:
            printf("Invalid Option !");
        }
    }

    return 0;
}