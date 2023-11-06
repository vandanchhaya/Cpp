// Write a C++ program to demonstrate use of call by refrence
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
int swap(int &,int &);
int main()
{
    int a=10, b=20;
    cout<<"Before swapping the value is "<<a<<" & "<<b<<endl;
    swap(a,b);
    cout<<"After swapping the value is "<<a<<" & "<<b<<endl;
    return 0;
}
int swap(int &p, int &q)
{
    int temp = p;
        p = q;
        q = temp;
}