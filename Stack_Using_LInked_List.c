#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}typedef S_N;

// Traversing + printing
void linkedlisttraversing(S_N *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(S_N* top)
{
    if(top == NULL)
        return 1;
    else
        return 0;                                                                                                                                                                                                                          
}

int isFull(S_N* top)
{
    S_N* p = (struct node*)malloc(sizeof(S_N));
    if(p==NULL)
    return 1;
    else
    return 0;   
}

S_N* push(S_N* top, int x)
{
    if(isFull(top))
    {
        printf("Stack Overflow !");
    }
    else{
        S_N* n = (S_N*) malloc(sizeof(S_N));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(S_N **top)
{
    if(isEmpty(*top))
    {
        printf("Stack Underflow !");
    }
    else{
        S_N*n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(S_N* top,int pos)
{
    S_N* ptr = top;
    
    for(int i=0;(i<pos-1 && ptr!=NULL);i++)
    { 
        ptr=ptr->next;                
    }
    if(ptr!=NULL)
    {
        return ptr->data; 
    }
    else{
        return -1;  
    }
}

int stackTop(S_N* top){
    return top->data;
}

// int stackbottom(struct node* top){
//     return top->data;
// }

int stackbottom(S_N* top){
    if(isEmpty(top)){
        printf("Stack Underflow!\n");
    }
    else{
        S_N* ptr = top;
        while(ptr->next != NULL){
        ptr = ptr->next;
        }
        return ptr->data;
    }
}

int main()
{   
    S_N* top = NULL;

    // struct node* top = NULL;
    top = push(top,11);
    top = push(top,12);
    top = push(top,13);
    top = push(top,14);
    top = push(top,15);
    top = push(top,16); 
    linkedlisttraversing(top); 
    
    printf("Value at position 3 is %d \n",peek(top,3)); 

    printf("Stack topmost element is %d \n",stackTop(top));

    printf("Stack bottomost element is %d \n",stackbottom(top));

    // printf("\n Before :\n");
    // linkedlisttraversing(top); 

    // printf("\n\npop_elem is %d \n",pop(&top));
    // printf("pop_elem is %d \n",pop(&top));
    // printf("pop_elem is %d \n",pop(&top));


    printf("\n After :\n");
    linkedlisttraversing(top); 



    return 0;
}