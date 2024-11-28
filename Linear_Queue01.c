#include <stdio.h>
#include <stdlib.h>

struct queue {

    int size;
    int f;
    int r;
    int *arr;
};

// Checks wheather queue is Full or not :
int isFull(struct queue *q)
{
    if(q->r == q->size-1)
    {
        return 1;
    }
    return 0;
}


// Checks wheather queue is Empty or not :
int isEmpty (struct queue *q)
{
    if(q->r == q->f)
    {
        return 1;
    }
    return 0;
}

// This Operations helps to Enqueue value into the queue :
void enqueue(struct queue *q, int val)
{
    if(isFull(q))
    {
        printf("This Queue is Full !\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element is %d  \n",val);
    }
}


// This Operations helps to Dequeue value into the queue :
int dequeue(struct queue *q)
{
    int a = -1;

    if(isEmpty(q))
    {
        printf("This Queue is Empty !\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 5;
    q.f = q.r = -1;
    q.arr = (int *) malloc( q.size*sizeof(int));


    // Before enqueue :
    if(isEmpty(&q))
    {
        printf("\nThe Queue is empty ! \n\n");
    }
    else{
        printf("\nThe Queue is not empty !\n\n");
    }

    // enqueue elements onto the queue :
    
    enqueue(&q,25);
    enqueue(&q,26);
    enqueue(&q,27);
    enqueue(&q,28);
    enqueue(&q,29);

    // After enqueue :
    if(isEmpty(&q))
    {
        printf("\nThe Queue is empty !\n\n");
    }
    else{
        printf("\nThe Queue is not empty !\n\n");
    }

    
    // dequeue elements onto the stack :
    printf("Dequeue element %d from the Queue \n",dequeue(&q));   
    printf("Dequeue element %d from the Queue \n",dequeue(&q));   
    printf("Dequeue element %d from the Queue \n\n",dequeue(&q));   
    printf("Dequeue element %d from the Queue \n\n",dequeue(&q));   
    printf("Dequeue element %d from the Queue \n\n",dequeue(&q));   

    // Trying to again enqued element :
     enqueue(&q,30);
    enqueue(&q,31);
    enqueue(&q,32);
   

    return 0;
}