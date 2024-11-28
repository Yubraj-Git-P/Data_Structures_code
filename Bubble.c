#include <stdio.h>

int main()
{
    int A[6] = {12,45,23,51,19,8};

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<(6-i);j++)
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    
    for(int i=0;i<6;i++)
    {
        printf("%d \t",A[i]);
    }


    return 0;
}