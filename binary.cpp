#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	public:
		int a,b;
		demo(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"a="<<a<<"b="<<b;
		}
		demo operator +(demo obj)
		{
			demo temp(0,0);
			temp.a=a+obj.a;
			temp.b=b+obj.b;
		
		}
};
int main()
{
	demo ob(10,20),ob1(30,40),ob2(0,0);
	ob2=ob+ob1;
	ob2.show();
	return 0;
	
}
