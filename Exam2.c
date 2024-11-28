#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define size 20

struct queue{
    int item[size];
    int rear;
    int front;
};
typedef struct queue qu;

void insert(qu *q)
{
    int d;
    printf(" Enter data to be inserted : \n");
    scanf("%d",&d);

    if(q->rear == size-1)
    {
        printf("Queue is full !\n");
    }
    else {
        q->rear++;
        q->item[q->rear] = d;
    }
}

void delete(qu *q)
{
    int d;
    
    if(q->rear < q->front)
    {
        printf(" Queue is empty ! ");
    }

    else{
        d = q->item[q->front];
        q->front--;
        printf("Deleted item is : %d\n",d);
    }
}

void display(qu *q)
{
    int i;

    if(q->rear < q->front)
    {
        printf("Queue is empty !\n");        
    }
    else{
        for(i=q->front; i<= q->rear; i++)
        {
            printf("%d\t",q->item[i]);
        }
    }
}

int main()
{
    int choice;
    qu *q;
    q->rear = -1;
    q->front = -1;

    printf("Menu driven program ! \n");

    printf("\n 1.insert \n 2. delete \n 3. display \n 4.exit.. ");

    while(choice != 4)
    {
        printf("Enter choice : ");
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
                exit(1);
                break;
            default :
                printf("---Invalid choice ---\n");        

        }
    }




    return 0;
}




