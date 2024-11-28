#include <stdio.h>
#include <stdlib.h>

struct stack{

    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top < 0)
    {
        return 1;
    }    
    return 0;
}

int isFull(struct stack *ptr)
{
    if(ptr->top == (ptr->size-1))
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack is Full \n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Cannot, pop\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int main()
{
    struct stack sp;
    sp.size = 5;
    sp.top = -1;
    sp.arr = (int *) malloc(sizeof(int)*sp.size);

    if(isEmpty(&sp))
    {
        printf("Empty\n");        
    }
    else{
        printf("Not_Empty\n");
    }

    if(isFull(&sp))
    {
        printf("Full\n");        
    }
    else{
        printf("not Full\n");
    }
    

    push(&sp,12);
    push(&sp,14);
    push(&sp,15);   
    push(&sp,16);   


    printf("Poped first element : %d\n",pop(&sp));  
    printf("Poped first element : %d\n",pop(&sp)); 
    printf("Poped first element : %d\n",pop(&sp));  


    //  if(isEmpty(&sp))
    // {
    //     printf("Empty\n");        
    // }
    // else{
    //     printf("Not_Empty\n");
    // }

    //  if(isFull(&sp))
    // {
    //     printf("Full\n");        
    // }
    // else{
    //     printf("not Full\n");
    // }

    return 0;
}