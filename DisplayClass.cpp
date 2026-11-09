#include<iostream>
using namespace std;

float DisplayClass(float Percentage)
{
	
	if((Percentage < 0) || (Percentage > 100))
	{
		cout<<"Invalid Marks ";
		
	}

	if((Percentage >=00.00) && (Percentage < 35.00))
	{
		cout<<"You are fail..\n";
	}
	else if((Percentage >=35.00) && (Percentage < 50.00))
	{
		cout<<"you are pass..\n";
	}
	else if((Percentage >=50.00) && (Percentage < 60.00))
	{
		cout<<"Second class..\n";
	}
	else if((Percentage >=60.00) && (Percentage < 75.00))
	{
		cout<<"First class..\n";
	}
	else if((Percentage >=75.00) && (Percentage < 100.00))
	{
		cout<<"First class with distinction..\n";
	}	
}

int main()
{
	float Value1 = 0.0f;
	
	cout<<"Enter the Percentage: \n";
	cin>>Value1;
	

	DisplayClass(Value1);

	



	return 0;
}


    