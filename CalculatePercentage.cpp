#include<iostream>
using namespace std;

float Percentage(int Marks,int totalMarks)
{
	float percentage = 0.0f;
	if(Marks > totalMarks || Marks < 0 ||(totalMarks < 0))
	{
		cout<<"Invalid input :\n";
		return percentage;
	}
	percentage = (((float)Marks / (float)totalMarks)*100);
	return percentage;
	
}

int main()
{
	int Value1 = 0,Value2=0;
	float res = 0.0f;
	cout<<"Enter the Marks: \n";
	cin>>Value1;
	cout<<"Enter the total marks Marks: \n";
	cin>>Value2;

	res = Percentage(Value1,Value2);

	cout<<"Percentage is :"<<res;



	return 0;
}