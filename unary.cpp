#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	public:
	 	int a,b;
	 	void num(int x,int y)
	 	{
		a=x;
		b=y;
		}
		void show()
		{
			cout<<"a="<<a;
			cout<<"b="<<b;
		}
		void operator -()
		{
			a=-a;
			b=-b;
		}
};
int main()
{
	demo obj;
	obj.num(10,80);
	obj.show();
	-obj;
	obj.show();
	return 0;
	}

