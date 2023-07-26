#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
	struct node * prev;
};

void linkedlistfromstart(struct node * ptr)
{
	while(ptr !=NULL)
	{
		printf("element: %d\n",ptr->data);
		ptr= ptr->next;
	}
}

void linkedlistfromend(struct node * ptr)
{
	while(ptr !=NULL)
	{
		printf("element: %d\n",ptr->data);
		ptr= ptr->prev;
	}
}
int main()
{
	struct node * head;
	struct node * second;
	struct node * third;
	
	//allocate memory for nodes in the linked list in heap
	head= (struct node *) malloc(sizeof(struct node));
	second= (struct node *) malloc(sizeof(struct node));
	third= (struct node *) malloc(sizeof(struct node));
	
	// link first and second node
	head->data= 7;
	head->next= second;
	head->prev= NULL;
	
	// link second and third node
	second->data= 10;
	second->next= third;
	second->prev= head;
	
	
	// terminate the list at thirrd node
	third->data= 15;
	third->next= NULL;
	third->prev= second;
		
	linkedlistfromstart(head);
	linkedlistfromend(third);
	return 0;
	
}
