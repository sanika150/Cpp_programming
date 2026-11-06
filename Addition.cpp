#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
	int ans = 0;
	ans = No1 + No2;
	return ans;
}

int main()
{
	int Value1 = 0, Value2=0;
	int res = 0;
	cout<<"Enter the first number:\n";
	cin>>Value1;
	cout<<"Enter the second number:\n";
	cin>>Value2;
	

	res = Addition(Value1,Value2);
	cout<<"Result is : "<<res<<endl;



	return 0;
}