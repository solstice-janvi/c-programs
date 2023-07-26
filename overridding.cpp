#include<iostream>
#include<conio.h>
using namespace std;
class parent
{
	public:
		void print()
		{
			cout<<"base class";
		}
};
class child:public parent
{
	public:
		void print()
		{
			cout<<"derived class";
		}
};
int main()
{
	child obj;
	obj.print();
	return 0;
}
