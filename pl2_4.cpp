//Write a C++ program for endl and setw function
//Vandan Chhaya
//220130318051
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=567;
    float pi=3.145678;

    cout<<"Value of a is  :: "<<setw(14)<<a<<endl;
    cout<<"Value of pi is :: "<<pi<<endl;

    return 0;
}