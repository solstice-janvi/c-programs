#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],base,weight,m,n,i,j,choice,address;
	a[10][10]=a[m][n];
	printf("enter number of row and column:");
	scanf(" %d %d",&m,&n);
	
	printf("enter base value of array");
	scanf("%d",&base);
	
	printf("enter the weight of an element:");
	scanf("%d",&weight);
	
	printf("enter the row and column of elemet to find");
	scanf("%d %d",&i,&j);
	
	printf("enter 1 for row mapping and 2 for column mapping");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				printf("row mapping:");
				address=base+weight*((i-1)*m+(j-1));
				printf("%d",address);
			}
			break;
			
		case 2:
			{
				printf("column mapping:");
				address=base+weight*((j-1)*n+(i-1));
				printf("%d",address);
			}
			break;
		default:
			printf("wrong choice");
			
	}
}
