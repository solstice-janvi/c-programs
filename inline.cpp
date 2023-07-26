#include<iostream>
#include<conio.h>
using namespace std;
class a{
	public:
		inline void show()
		{
			cout<<"inline fuction called";
				}
};
int main()
{
	a obj;
	obj.show();
}
