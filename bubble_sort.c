#include <stdio.h>
#include <conio.h>
void bubble(int[],int);

void bubble(int a[],int n)
{
    int i,j,temp;

    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1);j++)
        {
            temp = a[j];
            if(a[j]<a[j+1])
            {
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}



int main()
{
    int n;
    int a[100],i;

    printf("Enter NO of element : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d \n",&a[i]);
    }

    // Before Bubble sorting :
    for(i=0;i<n;i++)
    {
        printf("%d \t");
    }

    bubble(a,n);

    // After Bubble sorting :
    for(i=0;i<n;i++)
    {
        printf("%d \t");
    }
    

    return 0;
}