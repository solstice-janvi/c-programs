#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	public:
		int a,b,c;
		int sq(int a)
		{
			cout<<"sq of " <<a<<a*a;
		}
		int sq(int b,int c)
		{
			cout<<"add"<<b+c;
		}
};
int main()
{
	demo d;
	d.sq(5);
	d.sq(10,15);
	return 0;
	
}
