#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("a is th largest num");
	}
	else if(b>a)
	{
		if(b>c)
		printf("b is largest");
	}
	else
	printf("c is the largest");
	
	getch();
}

