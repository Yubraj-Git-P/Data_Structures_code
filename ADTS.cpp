#include <stdio.h>
int stack[100];
int top = -1,size;

int isEmpty()
{
    if(top<0)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    if(top == (size-1))
    {
        return 1;
    }
    else{
        return 0;
    }

}


void push(int val)
{
    if(isFull())
    {
        printf("Cannot Push element !");
    }
    else{
        top = top + 1;
        stack[top] = val;
    }
}

int pop()
{
    if(isEmpty())
    {
        printf("Cannot, POP element !");
    }
    else{
        int val = stack[top];
        top = top -1;
        return val;  
    }
}




int main()
{
    int choice;
    
    printf("Enter size of Stack : ");
    scanf("%d",&size);

    top:

    printf("Enter 1, to push element : \n");
    printf("Enter 2, to pop element : \n");
    printf("Enter 3, to show element : \n");
    printf("Enter 4, to check stack (empty or not) / (full or not) : \n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            int pushelement;
            printf("Enter the Pushing element : ");
            scanf("%d",&pushelement);

            push(pushelement);
            break;

        case 2:

            printf("Popped %d from Stack \n",pop());

            break;

        case 3 :
            printf("Showing all elements of arrays : \n");
            for(int i=0;i>top;i++)
            {
                printf("%d",stack[i]);
            }
            break;

        case 4:
            if(isEmpty())
            {
                printf("\n Stack is empty \n");
            }
            else{
                printf("\n Stack is not empty \n");
            }

            if(isFull())
            {
                printf("\n Stack is Full \n");
            }
            else{
                printf("\n Stack is not Full \n");
            }                  

    }

    int ch; 
    printf("Do You want to Continue again , : (1 for yes 0 for not :) \n");
    scanf("%d",&ch);

    if(ch == 1)
    {
        goto top;
    }
    else{
       goto end;
    }
    end:
    return 0;
}