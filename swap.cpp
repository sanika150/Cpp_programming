#include<iostream>
using namespace std;


int main()
{
	int Value1 = 0,Value2=0,Value3 = 0;
	
	cout<<"Enter the first number from user: "<<endl;
	cin>>Value1;
	cout<<"Enter the second number from user: "<<endl;
	cin>>Value2;

	cout<<"Before Swapping : "<<Value1<<" "<<Value2<<endl;
	Value3 = Value1;
	Value1 = Value2;
	Value2 = Value3;

	cout<<"After Swapping : "<<Value1<<" "<<Value2<<endl;



	return 0;
}