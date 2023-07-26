#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	public:
		void display()
		{
			cout<<"member function inside the class"<<endl;
		}
		void disp();
};
void demo:: disp()
{
	cout<<"member outside the class";
}
int main()
{
	demo obj;
	obj.display();
	obj.disp();
	return 0;
}
