#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
int peak(void);
void display(void);
int main()
{
	//clrscr();
	top=-1;
	printf("Tanu Giri IT(c) \n");
	printf("Roll No.=2100320130180");
	printf("\nEnter the size of STACK[MAX=100]:");
	scanf("%d",&n);
	printf("\n\t STACK OPERATIONS USING ARRAY");
	printf("\n\t----------------");
	printf("\n\t 1.PUSH\n\t 2.POP\n\t  3.peak\n\t 4.DISPLAY\n\t  5.EXIT");
	do
	{
		printf("\n Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
				case 2:
					{
						pop();
						break;
					}
					case 3:
						{
							peek();
							printf("element of the top of stack:%d\n",peek());
							break;
						}
					case 4:
					{
						display();
						break;
					}
					case 5:
						{
							printf("\n\t EXIT POINT");
							break;
						}
						default:
							{
								printf("\n\t please Enter a Valid Choice(1/2/3/4/5)");
							}
							
		}
	}
	while(choice!=5);
	return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("\n\tSTACK is over flow");
	}
	else
	{
		printf("Enter a value to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n\t Stack is under flow");
	}
	else
	{
		printf("\n\t The popped elementnis %d",stack[top]);
		top--;
	}
}
int peek()
{
	return stack[top];
}
void display()
{
	if(top>=0)
	{
		printf("\n The element in STACK\n");
		for(i=top;i>=0;i--)
		printf("\n%d",stack[i]);
		printf("\n Press Next Choice");
	}
	else 
	{
		printf("\n The STACK is empty");
	}
}
