#include <stdio.h>
#include <conio.h>
#define size 20

struct queue{
    
    int item[size];
    int rear;
    int front;
    int *p;
};

void enqueue(struct queue *p)
{
    int d;
    printf("Enter element to enqueue : ");
    scanf("%d",&d);

    if( (p->rear) == (size-1)) // if( (q->rear+1)%size == q->front ) 
    {
        printf("Queue is full ! ");                
    }
    else {
        p->rear++;   // q->rear = (q->rear+1)%size
        p->item[p->rear] = d;
    }
}

void dequeue(struct queue *p)
{
    if(p->rear < p->front)
    {
        printf("Queue is Empty ! ");                
    }
    else {
        int d;
        d = p->item[p->front];
        p->front++;   //q->front = (q->front+1)%size;
        printf("Deleted element is %d \n",d);
    }
}

void top(struct queue *p)
{
    printf("Topmost element is %d \n",p->item[p->front]);
}

void bottom(struct queue *p)
{
    printf("Bottom element is %d \n",p->item[size-1]);
}

void display(struct queue *p)
{
    for(int i=p->front; i<p->rear; i++)  // for( int i=(q->front+1)%size; i<q->rear;  (i+1)%size )
    {
        printf("%d \n",p->item[i]);
    }
}


int main()
{
    int choice=0;
    struct queue *q;
    q->rear = -1; // q->rear = (size-1)
    q->front = -1; // q->front = (size-1)

    printf("Menu driven program for linear queue : \n");

    printf("\n1. enqueue \n2.dequeue \n3.top \n4.bottom \n5.display \n6.exit....");

    while(choice!=4)
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