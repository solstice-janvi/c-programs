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
		friend void operator -( demo &ob);
};
void operator -(demo &ob)
{
	
	ob.a=-ob.a;
	ob.b=-ob.b;
}
int main()
{
	demo obj;
	obj.num(10,80);
	obj.show();
	-obj;
	obj.show();
	return 0;
	}

