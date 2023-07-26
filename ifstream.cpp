#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	int n;
	char name[20];
	ifstream ifn;
	ifn.open("C:\\Users\\vansh\\Desktop\\filename.txt");
	ifn>>n>>name;
	cout<<n<<name;
	ifn.close();
	return 0;
}
