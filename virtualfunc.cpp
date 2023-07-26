#include<iostream>
using namespace std;
class base
{
	public:
	virtual void display()
	{
		cout<<"\n display base";
		}	
};
class derived: public base
{
	public:
		virtual void display()
		{
			cout<<"\n display derived";
		}
};
int main()
{
	base b,*bptr;
	derived d;
	cout<<"btr point to base";
	bptr=&b;
	bptr->display();
	cout<<"bptr point to derived";
	bptr=&d;
	bptr->display();
}

