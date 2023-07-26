#include<iostream>
using namespace std;
class a
{
	public:
		int c;
		static int b;
		a(int x,int y)
		{
			c=x;
			b=y;
		}
		void show()
		{
			cout<<c<<" "<<b<<endl;
		}
		void operator -()
		{
			a=-a;
			b=-b;
		}
};
int main()
{
	a d(-10,20);
	d.show();
	-d;
	d.show;
}
