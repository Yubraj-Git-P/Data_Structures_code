#include <stdio.h>
// Program to ilustrate the stack operations in array implementation's :
int stack[100], top = -1, n;

void push()
{
    int d;

    printf("Enter your value to push : ");
    scanf("%d", &d);

    if (top == (n - 1))
    {
        printf("Overflow !");
    }
    else
    {
        top = top + 1;
        stack[top] = d;
    }
}

void pop()
{
    if (top < 0)
    {
        printf("Underflow !");
    }
    else
    {
        printf("Pop element is %d \n", stack[top]);
        top = top - 1;
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d \t", stack[i]);
    }
}

int stack_top()
{
    int topmost;
    topmost = stack[top];
    return topmost;
}

int stack_bottom()
{
    int bottommost;
    bottommost = stack[0];
    return bottommost;
}

int main()
{
    int choice;

    printf("------Stack Operations in Array implementation-------------\n");

    printf("Enter number of element on stack : ");
    scanf("%d", &n);

    printf("---------Enter your Operations---------\n");
    printf("\n1.push()\n2.pop()\n3.display()\n4.stack_top()\n5.stack_bottom()\n6.Exit()......");

    do
    {
        printf("\n\nEnter Choice : \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            push();
            break;

        case 2:

            pop();
            break;

        case 3:

            display();
            break;

        case 4:

            printf("Stack top value is %d\n", stack_top());
            break;

        case 5:

            printf("Stack top value is %d\n", stack_bottom());
            break;

        case 6:

            printf("Exiting..........\n");
            break;

        default:
            printf("Invalid optinos !\n");
            break;
        }

    } while (choice > 6);

    return 0;
}