#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	public:
		int a,b;
		void print(int x, int y)
		{
			a=x;
			b=y;
			cout<<"num "<<a<<" "<<b;
		}
		void print()
		{
			int c;
			c=a+b;
			cout<<"sum "<<c;
		}
};

int main()
{
	a obj;
	obj.print(10,20);
	obj.print();
	return 0;
}
