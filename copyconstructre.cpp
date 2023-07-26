#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	int a,b;
	public:
		a(int x,int y)
		{
			a=x;
			b=y;
		}
		a (a &ref)
		{
			a=ref.a;
			b=ref.b
		}
		void show()
		{
			cout<<a<<" "<<b;
		}

};

int main()
{
	a obj(10,20)
	a obj2=obj;
	obj.show();
	obj2.show();
}
