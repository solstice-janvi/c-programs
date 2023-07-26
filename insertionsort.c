#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,arr[20],n;
	printf("enter the number of elements");
	scanf("%d  \n",&n);
	printf("enter elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d \n",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && arr[j-1]>arr[j])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
	printf("sorted array");
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
}
