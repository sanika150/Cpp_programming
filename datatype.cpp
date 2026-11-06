#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	char ch ='S';
	float f = 21.5f;
	double d = 23.4556;
	
	cout<<"value of integer is"<<a <<endl;
	cout<<"value of character is "<<ch<<endl;
	cout<<"value of float is"<<f<<endl;
	cout<<"value of double is "<<d<<endl;

	cout<<"Address of a is: "<<&(a)<<endl;
	cout<<"Address of ch is: "<<&(ch)<<endl;
	cout<<"Address of f is: "<<&(f)<<endl;
	cout<<"Address of d is: "<<&(d)<<endl;

	cout<<"Size of a is :"<<sizeof(a)<<endl;
	cout<<"Size of a is :"<<sizeof(ch)<<endl;
	cout<<"Size of a is :"<<sizeof(f)<<endl;
	cout<<"Size of a is :"<<sizeof(d)<<endl;
	

	return 0;
}