#include<iostream>
#include<conio.h>
using namespace std;
class a{
	int c;
	static int b;
	public:
		a(int x,int y){
		c=x;
		b=y;
	}
	void show()
	{
		cout<<"c="<<c<<" "<<"b="<<b;
	}
	static void disp()
	{
		cout<<"static b="<<b;
	}
};
int a::b=0;
int main()
{
	a obj(10,20),obj1(200,300);
	obj.show();
	obj1.show();
	obj.show();
	a::disp()
;}
