//Write a C++ program to access global variable using scope resolution operator without using class
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
int a=15;
int main()
{
    int a=10;
   
    cout<<"Value of A is : "<<::a<<endl;
    cout<<"Value of A is : "<<a<<endl;
   
    return 0;
}