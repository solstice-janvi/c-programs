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
			cout<<c<<" "<<b;
		}
		static void display()
		{
			cout<<b;
		}
};
int a::b=0;
int main()
{
	a a1(10,20),a2(100,200);
	a1.show();
	a2.show();
	a2.display();
	a1.show();
}
