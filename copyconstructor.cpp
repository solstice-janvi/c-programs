#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	public:
		int x;
		demo(int y)
		{
			x=y;
		}
		demo( demo &t)
		{
			x=t.x;
		}
		void show()
		{
			cout<<x;
		}
};
int main()
{
	demo obj1(10);
	obj1.show();
	demo obj2(obj1);
	obj2.show();
}
