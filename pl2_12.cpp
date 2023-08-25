//Write a C++ program to demonstrate use of default arguments
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
int area(float, float PI=3.14);
int main()
{
    float r;
    cout<<"Enter the value of R : ";
    cin>>r;
    cout<<"Area of the circle is :: "<<area(r)<<endl;
    return 0;
}
int area(float rad, float PI)
{
    return(PI * rad * rad);
}