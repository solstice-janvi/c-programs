#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,j,insert,n,size=10,temp,lb,ub,mid,pass,new,new_position;
	printf("enter  the length of array: \n");
	scanf("%d",&n);
	if(n==size)
	{
		printf("overflow");
	}
	else
	{
		lb=0;
		ub=n;
		printf("enter the elements of array:\n");
		for(i=lb;i<ub;i++)
		{
			scanf("%d",&arr[i]);
	
		}
		
		printf("elements of array:\n");
		for(i=lb;i<ub;i++)
		{
			printf("%d \n",arr[i]);
	
		}
		
		
	//	insertion in array
		printf("enter the element you want to insert:");
		scanf("%d",&new);
		printf("enter the position:");
		scanf("%d",&new_position);
		for(i=ub;i>=new_position;i--)
		{
			arr[i+1]=arr[i];
			
		}
		arr[new_position]=new;
		ub=ub+1;
		
		printf("new array:\n");
		for(i=lb;i<ub;i++)
		{
			printf("%d \n",arr[i]);
	
		}
		}
	
//sorting

	for(pass=1;pass<=n;pass++)
	{
		for(i=0;i<n+1-pass;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;	
			}
		}
	}
	printf("sorted array:\n");
		for(i=0;i<=n;i++)
		{
			printf("%d \n",arr[i]);

		}

	
//	searching

	lb=0;
	ub=n;

	printf("enter the element to find");
	scanf("%d",&j);
	while(ub>=lb)
	{
	mid=(lb+ub)/2;
	
	if(j==arr[mid])
	{
		printf("element %d is at %d",j,mid);
		break;
		
	}
	else if(arr[mid]<j)
	{
		ub=mid-1;
	}
	else
	{
		lb=mid+1;
	}
}
}
