//Write a C++ program to add two integer values using call by refrence
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
int add(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter the value of a :: ";
    cin>>a;
    cout<<"Enter the value of b :: ";
    cin>>b;
    cout<<"Sum of a and b is :: "<<add(a,b)<<endl;
    return 0;
}
int add(int &p, int &q)
{
    return p + q;
}