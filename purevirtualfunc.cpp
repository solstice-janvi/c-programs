#include<iostream>
using namespace std;
class base
{
	public:
	virtual void display()=0;	
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
	 derived d;
	 d.display();
	 return 0;
	
}
