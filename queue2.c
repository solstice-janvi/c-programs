#include<stdio.h>
#include<conio.h>
int queue[10],front=0,rear=0,size=9;
void insertion();
void deletion();
void display();

void main()
{
	int choice,num;

	do
	{
		printf("enter your choice of operation for queue\n");
		printf("1. insertion \n 2. deletion \n 3.display \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertion();
				break;
			case 2:
				deletion();
				break;
			case 3:
				display();
				break;
			default:
				printf("please enter valid choice");
		}
		printf("enter 1 to continue or enter 2 to exit");
		scanf("%d",&num);
	}while(num==1);
}

void insertion()
{
	int item;
	if (rear==size)
	{
		printf("queue is full");
		
	}
	else
	{
		printf("insert element in queue:");
		scanf("%d",&item);
		rear=rear+1;
		queue[rear]=item;
	}
}

void deletion()
{
	int item;
	if (front==rear)
	{
		printf("empty queue");
		
	}
	else
	{
		printf("deleted element is %d:",queue[front++]);
		front= front+1;
	}
}

void display()
{
	int i;
	
	if(rear>front)
	{
		printf("queue elements:");
		for(i=front;i<rear;i++)
		{
			printf("%d \n",queue[i]);
		}
	}
 	else
	{
		printf("queue is empty");
		
	}
}
