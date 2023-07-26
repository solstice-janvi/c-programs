#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	jump:
	cout<<"enter the two numbers:"<<endl;
	cin>>a>>b;
	try
	{
		if(b==0)
		throw b;
		else{
			c=a/b;
			cout<<c;
		}
	}
	catch(int x)
	{
		cout<<"can't divide by try again"<<x<<endl;
		goto jump;
		return 0;
	}
}
