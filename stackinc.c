#include<stdio.h>
int stack[10], top=-1;
void push();
void pop();
void show();
void exit();
int main()
{
	int num;
	while(num=1)
	{
		int choice;
		printf(" 1. push operation \n 2. pop operation \n 3. show operation \n 4. exit operation \n enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: show();
			break;
			case 4: exit();
			default: printf("your choice is invalid \n");
		}
		printf("press 1 to continue or 2 to exit");
		scanf("%d",&num);
	}
}
void push()
{
	int item;
	if(top==9)
	{
		printf("stack is full \n");
	}
	else {
		printf("push element in stack \n");
		scanf("%d", &item);
		top= top+1;
		stack[top]= item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("no element in stack \n");
	}
	else
	{
		printf("pop %d",stack[top]);
		top=top-1;
	}
}
void show()
{
	int i;
	if(top>=0)
	{
		printf("stack elements \n");
		for(i=top;i>=0;i--)
		{
			printf("%d \t",stack[i]);
		}
	}
	else
	{
		printf("empty");
	}
}
void exit()
{
	printf("exit");
}
