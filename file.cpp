#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
	int n;
	char name[20];
	fstream fn;
	fn.open("C:\\Users\\vansh\\Desktop\\filename.txt",ios::in);
	cout<<"enter age and name :";
	fn>>n>>name;
	cout<<n<<name;
	fn.close();
	return 0;
}
