#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[20],k,n,i,j,position,swap;
	printf("enter the umber of elements \n");
	scanf("%d",&n);
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d \n",&arr[i]);
			
	}
	printf("your array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
			
	}
	for(i=0;i<(n-1);i++)
	{
		position=i;
		for(i=i+1;j<n;j++)
		{
			if(arr[position]>arr[j])
			{
				position=j;
			}
		}
		if(position !=i)
		{
			swap=arr[i];
			arr[i]=arr[position];
			arr[position]=swap;
		}
	}
	for(i=0;i<n;i++)
	printf("%d \t",arr[i]);
	return 0;
}
