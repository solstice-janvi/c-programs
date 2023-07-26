#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
		void set_data(int a);
		int get_data() const
		{
		
			x=x+1;
			return x;

		}
};
void demo :: set_data(int a)
{
	a=x;
}


int main()
{
	demo d;
	d.set_data(20);
	cout<<endl<<d.get_data();
}
