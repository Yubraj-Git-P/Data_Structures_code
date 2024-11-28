#include <stdio.h>
#include <stdlib.h>

// Write a program to Show operations performed Queue : 

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if(q->f == (q->size-1))   
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if(q->f == q->r)   
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if(isFull(q))
    {
        printf("Sorry, cannot Enqueue, Queue is Full ! \n\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;                
    }
}

int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Sorry cannot Dequeue, Queue is Empty ! \n\n");
    }  
    else{
        q->f++;
        return q->arr[q->f];
    }  
}


int main()
{
    struct queue q;
    q.size = 50;
    q.f=q.r=-1;
    q.arr = (int *) malloc(sizeof(int)*q.size);

    if(isFull(&q))
    {
        printf("Queue is Full ! \n\n");
    }
    else{
        printf("Queue is not Full ! \n\n");
    }


    if(isEmpty(&q))
    {
        printf("Queue is Empty ! \n\n");
    }
    else{
        printf("Queue is not Empty ! \n\n");
    }
    

    enqueue(&q,4);
    enqueue(&q,5);
    enqueue(&q,6);
    enqueue(&q,7);
    enqueue(&q,8);
    enqueue(&q,9);

    if(isEmpty(&q))
    {
        printf("Queue is Empty ! \n\n");
    }
    else{
        printf("Queue is not Empty ! \n\n");
    }

    printf("First dequeue element is %d \n\n",dequeue(&q));
    printf("First dequeue element is %d \n\n",dequeue(&q));
    printf("First dequeue element is %d \n\n",dequeue(&q));
    printf("First dequeue element is %d \n\n",dequeue(&q));



    return 0;
}