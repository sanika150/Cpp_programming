#include<iostream>
using namespace std;

float Area(float Radius)
{
    float Ans = 0.0f;
    float PI=3.14;
    Ans = PI * Radius * Radius;
    return Ans;

}
int main()
{

    float Value = 0.0f;
    float Res = 0.0f;
    cout<<"Enter the raduis of circle:";
    cin>>Value;

    Res = Area(Value);
    cout<<"Area of circle is :"<<Res<<endl;
    return 0;
}