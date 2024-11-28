#include <stdio.h>
#include <stdlib.h>

struct CircularQueue{
    int size;
    int f,r;
    int *arr;
};

// Circular Queue Check empty or not  :
int isEmpty(struct CircularQueue *q)
{
    if(q->r == q->f)
    {
        return 1;
    }
    return 0;
}

// Circular  Queue Check full or not : 
int isFull(struct CircularQueue *q)
{
    if(((q->r+1)%q->size) == q->f)
    {
        return 1;
    }
    else{
        return 0;
    }
}

// Circular Queue enqueue operation :
void enqueue(struct CircularQueue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue is Full ! \n\n");
    }
    else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
         printf("Enqued element is %d  \n",val);
    }
}

// Circular Queue dequeue operation :
int dequeue(struct CircularQueue *q)
{
    int val = -1;

    if(isEmpty(q))
    {
        printf("Queue is Empty ! \n\n");
    }
    else
    {
        q->f = (q->f+1)%q->size;
        val = q->arr[q->f];
    }   
}

int main()
{
    struct CircularQueue q;
    q.size = 5;
    // q.f = q.r = -1;  // Linear Queue :
    q.f = q.r = 0;      // Circular Queue :
    q.arr = (int *) malloc(sizeof(int)*q.size);

    // Checks Empty or not :
    if(isEmpty(&q))
    {
        printf("\n Circular Queue is Empty : \n\n");
    }
    else{
        printf("\n Circular Queue is not Empty : \n\n");
    }
    
    // Enqueing Element :
    enqueue(&q,12);
    enqueue(&q,13);
    enqueue(&q,14);
    enqueue(&q,15);
  

    if(isEmpty(&q))
    {
        printf("\n Circular Queue is Empty : \n\n");
    }
    else{
        printf("\n Circular Queue is not Empty : \n\n");
    }

    
    // Dequeing Element :
    printf("Dequeue element is %d \n",dequeue(&q));   
    printf("Dequeue element is %d \n",dequeue(&q));   
    printf("Dequeue element is %d \n",dequeue(&q));   
    printf("Dequeue element is %d \n\n",dequeue(&q));   

    // Again enqueue in Circular Queue :
    enqueue(&q,16);
    enqueue(&q,17);
    enqueue(&q,18);
    enqueue(&q,19);


    return 0;
}