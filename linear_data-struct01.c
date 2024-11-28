#include <stdio.h>
#include <stdlib.h>

// implementing stack's as an Array's ADT's :
struct stack{
    int size;
    int top;
    int *arr;    
};

// Checks Stack is empty or not :
int isEmpty(struct stack *ptr)
{
    if(ptr->top < 0)
    {
        return 1;
    }   
    return 0; 
}

// Checks Stack is full or not :
int isFull(struct stack *ptr)
{
    if(ptr->top == (ptr->size-1))
    {
        return 1;
    }
    return 0;
}

// Push Operation in  Stack :
void Push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("\n\n %d cannot push onto the stack since stack is Full \n\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// Pop element from stack :
int Pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("\nCannot Pop element from Stack since, stack is empty :\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// Peek Operation into the Stack :
int Peek(struct stack *ptr, int position)
{
    if(isEmpty(ptr))
    {
        printf("Cannot Peek Because Empty !\n");
    }    
    else{
        return ptr->arr[position];
    }
}

// return Stacktop() value :
int Stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];    
}

// return Stackbottom() value :
int Stackbottom(struct stack *ptr)
{
    return ptr->arr[0];    
}

int main()
{   
    struct stack sp;
    sp.size = 5;
    sp.top = -1;
    sp.arr = (int*) malloc(sizeof(int)*sp.size); // Mallocally Address the memory :

    printf("\nStack Created Sucessfully : \n\n");

    // Before pushing empty or not :
    if(isEmpty(&sp))
    {
        printf("Stack is empty !\n");
    }
    else{
        printf("Stack is not empty !\n");
    }

    // Before pushing  is full or not :
    if(isFull(&sp))
    {
        printf("\nStack is Full !\n");
    }
    else{
        printf("\nStack is not Full !\n");
    }

    //  Pushing element onto the Stack : 
    Push(&sp,23);
    Push(&sp,33);
    Push(&sp,56);
    Push(&sp,78);
    Push(&sp,89);

     // After pushing empty or not :
    if(isEmpty(&sp))
    {
        printf("\nStack is empty !\n");
    }
    else{
        printf("\nStack is not empty !\n");
    }


    // After pushing is full or not :
    if(isFull(&sp))
    {
        printf("\nStack is Full !\n");
    }
    else{
        printf("\nStack is not Full !\n");
    }


    // Pop element from stack :

   printf("Poping %d from Stack ! \n",Pop(&sp));
   printf("Poping %d from Stack ! \n",Pop(&sp));


   // Peek Operation onto Stack :
   printf("\n\n Value on %d Position of Stack is %d \n",0,Peek(&sp,0));
   printf("\n\n Value on %d Position of Stack is %d \n",3,Peek(&sp,3));
   printf("\n\n Value on %d Position of Stack is %d \n",4,Peek(&sp,4));
   printf("\n\n Value on %d Position of Stack is %d \n",2,Peek(&sp,2));

   // Stacktop() :
   printf("Value of Stacktop element is %d \n ",Stacktop(&sp));
   
   // Stackbottom() :
   printf("Value of Stack element is %d \n ",Stackbottom(&sp));  



    return 0;
}