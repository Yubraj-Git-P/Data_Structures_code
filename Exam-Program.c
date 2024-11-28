
// 1)... C - Program to implement stack as an ADT's :
/*  
  #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int stack[100],i,j,n,choice=0,top=-1;

void push()
	{
		int val;
		
		printf("Enter the element to : ");
		scanf("%d",&val);
		
		if(top==n)
		{
			printf("Overflow !");						
		}		
		else{
			top=top+1;
			stack[top]=val;			
		}
	}

void pop()
	{
		if(top==-1)
		{
			printf("Underflow !");			
		}		
		else{
			printf("Pop %d from Stack.",stack[top]);
            top=top-1;
		}
	}    


void Display()
	{
		for(i=top;i>=0;i--)
		{
			printf("%d \n",stack[i]);			
		}		
		
		if(top==-1)
		{
			printf("Stack Empty !");
		}
	}

int main()
{
	printf("Enter the number of elements in stack :");
	scanf("%d",&n);
	
	while(choice!=4)
	{
		printf("Choose one from the below options : \n");
		printf("\n 1). push() \n 2). pop() \n 3). Display() \n 4). Exit()..\n\n");
	    
		printf("Enter choice : ");
	    scanf("%d",&choice);
	    
	    switch(choice)
	    {
	    	case 1 : 
			      push();
				  break;
				  
			case 2 :
			      pop();
				  break;
			
			case 3:
			      Display();
				  break;
			case 4:
			      printf(" Existing.... ");
				  exit(0);
				  
			default:
			     printf(" Invalid Options ! ");	  	  	  	  	    	
		}
	
	}	
		
	return 0;
}
*/

// 2). Infix to Postfix C - Program :
#include <stdio.h>

char stack[20];
int top = -1;

void push(char x)
{
	stack[++top] = x;
}

char pop()
{
	if(top == -1)
	{
		return -1;
	}
	else{
		return stack[top--];
	}
}

int priority(char x)
{
	if( x == '(' )
	{
		return 0;
	}
	if( x == '+' || x == '-' )
	{
		return 1;
	}
	if( x == '*' || x == '/' )
	{
		return 2;
	}
}

int main()
{
	char exp[20];

	char *e, x;

	printf("Enter the expression : ");
	scanf("%s",exp);

	e = exp;

    while(*e!='\0')
	{
		if(isalnum(*e))
		   printf("%c",*e);

		else if(*e == '(')
		{
			push(*e);
		} 
		
		else if(*e == ')')
		{
			while( x=pop() != '(')
			{
				printf(" %c ",x);
			}
		}

		else{
			while(priority(s))
		}

	}



	return 0;
}






