#include <stdio.h>
#include <conio.h>

void create(int[100],int*);
void insert(int[100],int*);
void delete(int[100],int*);
void update(int[100],int*);
void traverse(int[100],int*);
void searching(int[100],int*);

int main()
{
    int a[100];

    int n;
    int choice;

    printf("\n Menu for program \n ");

    printf("1.Create() \n 2.Insert() \n 3.Delete() \n 4.Update() \n 5). Traversing() \n 6).Searching() :");
    
    do{

        printf("Enter your choice : \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of element in list : ");
                scanf("%d",&n);

                create(a,&n);
                break;

            case 2:

                insert(a,&n);    
                break;

            case 3:

                delete(a,&n);
                break;

            case 4:

                update(a,&n);
                break;

            case 5:

                traverse(a,&n);
                break;

            case 6:

                search(a,&n);
                break;

            default:
                printf("Invalid choice : ");
                break;                     
        }


    }while(choice<7);

    return 0;

}

void create( int a[100], int *n)
{
    printf("Enter %d elements : ",*n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    

}

void insert(int a[100], int *n)
{
    int pos,nel,i;

    printf("Enter position at which you want to insert element : ");
    scanf("%d",&pos);

    printf("Enter new element : ");
    scanf("%d",&nel);

    for(i=(*n-1);i>=pos;i--)
    {
        a[i+1]=a[i];
    }

    a[pos]=nel;
    *n=*n+1;

}

void delete(int a[100],int *n)
{
    int pos,i;
    
    printf("Enter position at which you want to delete elem : ");
    scanf("%d",&pos);

    for(i=pos;i<*n;i++)
    {
        a[i] = a[i+1];
    }

    *n=*n-1;
}

void update(int a[100],int *n)
{
    int pos,num;

    printf("Enter position at which you want to update an element : ");
    scanf("%d",&pos);
    
    printf("Enter new element \n");
    scanf("%d",&num);

    a[pos]=num;
}

void traverse(int a[100], int *n)
{
    int i;

    printf("Current element of the list are : ");
    for(i=0;i<*n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void searching(int a[100], int *n)
{
    int key,i;

    printf("Enter the element to be searched : ");
    scanf("%d",&key);

    for(i=0;i<*n;i++)
    {
        if(key==a[i])
        {
            printf("Search Sucessfull !");
            printf("Number is in %d position !",i);
            break;
        }
    }

    if(i==*n)
    printf("Search Unsucessfull !");
}