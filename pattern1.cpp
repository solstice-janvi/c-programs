#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,row;
	cout<<"enter the number of rows";
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j>=i;j++)
		{
			cout<<" ";
		}
		for(j=1;j>=i;j++)
		{
			cout<<j;
		}
		for(j=i-1;j>=i;j--)
		{
			cout<<j;
		}
	}
	return 0;
}
