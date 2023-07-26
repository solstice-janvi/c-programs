#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a;
	char name[20];
	
	//open
	ofstream myfile;
	myfile.open("C:/Users/vansh/Desktop/filename.txt");
	cout<<"enter no and name";
	cin>>a>>name;
	myfile<<a<<name;
	cout<<a<<name;
	myfile.close();
	
	//read
	int n;
	char str[20];
	ifstream myf;
	myf.open("C:/Users/vansh/Desktop/filename.txt");
	myf>>n>>str;
	cout<<n<<str;
	
	myfile.close();
}
