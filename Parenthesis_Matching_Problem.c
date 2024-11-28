#include <stdio.h>
#include <stdlib.h>

// Parenthesis Matching :
struct stack{
    int size;
    int top;
    int *exp;    
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

void Push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("\n\n %d cannot push onto the stack since stack is Full \n\n");
    }
    else{
        ptr->top++;
        ptr->exp[ptr->top] = val;
    }
}

int Pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("\nCannot Pop element from Stack since, stack is empty :\n");
    }
    else{
        int val = ptr->exp[ptr->top];
        ptr->top--;
        return val;
    }
}


// int Parenthesis(struct stack *ptr)   // not Working 
int Parenthesis(char *exp)
{
    struct stack sp;
    sp.size = 5;
    sp.top = -1;
    sp.exp = (int*) malloc(sizeof(int)*sp.size); 

    // for (int i = 0; i!=7; i++)
    // {
    //     printf("%c",exp[i]);        
    // }

    for (int i = 0; i != 7; i++)
    {
        if(exp[i] == "(")
        {
            Push(&sp,"(");
        }
        else if (exp[i] == ")")
        {
            if(isEmpty(&sp))
            {
                return 0;
            }            
        }
        pop(&sp);
    }

    if(isEmpty(&sp))
    {
        return 1;
    }
    else{
        return 0;
    }     
}

int main()
{
    // struct stack sp;
    // sp.size = 5;
    // sp.top = -1;
    // sp.exp = (int*) malloc(sizeof(int)*sp.size); 

    printf("Stack Created Sucessfully ! \n\n");  

    char *exp = "(3+2)-1";
    
     for (int i = 0; i!=7; i++)
    {
        printf("%c",exp[i]);        
    }

    printf("\n\n");

    // checking is parenthesis matched or not :

    if(Parenthesis(exp))
    {
        printf("Since, Parenthesis Matched so, Your expression is balanced !");
    }
    else{
        printf("Since, Parenthesis Not Matched so, Your expression is Un-balanced !");
    }

    return 0;
}