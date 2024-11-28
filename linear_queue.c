#include <stdio.h>
#include <conio.h>
#define size 20

struct queue{
    
    int item[size];
    int rear;
    int front;
};

typedef struct queue que;

void enqueue(struct queue *q)
{
    int d;
    printf("Enter element to enqueue : ");
    scanf("%d",&d);

    if(q->rear == (size-1))
    {
        printf("Queue is full ! ");                
    }
    else {
        q->rear++;
        q->item[q->rear] = d;
    }
}

void dequeue(struct queue *q)
{
    if(q->rear <= q->front)
    {
        printf("Queue is Empty ! ");                
    }
    else {
        int d;
        d = q->item[q->front];
        q->front++;
        printf("Deleted element is %d \n",d);
    }
}

void top(struct queue *q)
{
    printf("Topmost element is %d \n",q->item[q->front]);
}

void bottom(struct queue *q)
{
    printf("Bottom element is %d \n",q->item[size-1]);
}

void display(struct queue *q)
{
    for(int i=q->front; i<q->rear; i++)
    {
        printf("%d \n",q->item[i]);
    }
}



int main()
{
    int choice=0;
    struct queue *q;
    q->rear = -1;
    q->front = -1;

    printf("Menu driven program for linear queue : \n");

    printf("\n1. enqueue \n2.dequeue \n3.top \n4.bottom \n5.display \n6.exit....");

    while(choice!=6)
    {
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                enqueue(q);
                break;

            case 2:
                dequeue(q);
                break;
            
            case 3:
                top(q);
                break;

            
            case 4:
                bottom(q);
                break;

            
            case 5:
                display(q);
                break;

            
            case 6:
                printf("Exiting.....");
                break;

                default: printf("Invalid option : ");                    
        }        
    }


    return 0;
}


