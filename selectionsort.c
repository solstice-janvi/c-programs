#include<stdio.h>
#include<conio.h>
int i,j,n;
void printarray(int* a,int n)
{

	printf("your array:\n");
	for( i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
		
	}
}

void selectionsort(int* a,int n){
	int indexofmin,temp;
	printf("running selection sort......");
	for(i=0;i<n-1;i++)
	{
		indexofmin= i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[indexofmin])
			{
				indexofmin=j;
			}
		}

			temp=a[i];
			a[i]=a[indexofmin];
			a[indexofmin]=a[i];
	
	}
}

void main()
{
	int a[10] ={3,24,45,7,10};
	n=5;
	printarray(a,n);
	selectionsort(a,n);
	printarray(a,n);
}
