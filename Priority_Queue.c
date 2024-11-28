#include <stdio.h>
#include <conio.h>
#define size 20

struct cqueue
{
    int item[size];
    int rear;
    int front;
};

typedef struct cqueue pq;
void insert(pq*);
void delete(pq*);
void display(pq*);

void insert(pq *q)  /*insert function*/
{
    int d;

    if(q->rear == size-1)
    {
        printf("Queue is Full ! ");
    }
    else{
        printf("Enter data to be inserted \n");
        scanf("%d",&d);
        q->rear++;
        q->item[q->rear] = d;
    }
}

void delet(pq *q) /*delete function*/
{
    int i,temp=0,x;
    x = q->item[q->front];
    
    if(q->rear < q->front)
    {
        printf("Queue is empty ! \n");
        return 0;
    }
    else{
        
    }
}

int main()
{
    int choice =0;
    pq *q;
    q->rear = -1;
    q->front =0;

    printf("Menu Program : \n");
    printf(" \n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit..\n");
    
    while(choice!=4)
    {
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                insert(q);
                break;

            case 2:
                delete(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                printf("Exiting.....");
                break;
            default:
                printf("Your choice is wrong \n");                
        }
    }



    return 0;   
}