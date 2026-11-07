#include<iostream>
using namespace std;

int Even(int No1)
{
	if ((No1 % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int Value1 = 0;
	int res = 0;
	cout<<"Enter the first number from user: \n";
	cin>>Value1;
	

	res = Even(Value1);

	if (res == true)
	{
		cout<<"Even number";
	}
	else
	{
		cout<<"Odd number";
	}



	return 0;
}