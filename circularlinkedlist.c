#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};

void linkedlisttraversal(struct node * head)
{
	struct node * ptr= head;
	do
	{
		printf("element: %d\n",ptr->data);
		ptr= ptr->next;
	}while(ptr != head );
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
	
	// link second and third node
	second->data= 10;
	second->next= third;
	
	// terminate the list at thirrd node
	third->data= 15;
	third->next= head;
	
	linkedlisttraversal(head);
	return 0;
	
}
