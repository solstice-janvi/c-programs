#include<stdio.h>
#include<conio.h>
int stack[10],top=-1,size=9;
void push();
void pop();
void show();

void main()
{
	int choice,num;

	do
	{
		printf("enter your choice of operation for stack\n");
		printf("1. push operation \n 2. pop operation\n 3.show operation\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			default:
				printf("please enter valid choice");
		}
		printf("enter 1 to continue or enter 2 to exit");
		scanf("%d",&num);
	}while(num==1);
}

void push()
{
	int item;
	if (top==size)
	{
		printf("stack is full");
		
	}
	else
	{
		printf("push element in stack:");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}

void pop()
{
	int item;
	if (top==-1)
	{
		printf("empty stack");
		
	}
	else
	{
		printf("pop %d:",stack[top]);
		top= top-1;
	}
}

void show()
{
	int i;
	
	if(top>=0)
	{
		printf("stack elements:");
		for(i=top;i>=0;i--)
		{
			printf("%d \n",stack[i]);
		}
	}
 	else
	{
		printf("stack is empty");
		
	}
}
