//Write a C++ to demonstrate use of return by refrence
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
int x = 5;      //global declaration
int &test();
int main()
{
    test()=15;
    cout<<test();
    return 0;
}
int &test()
{
    return x;
}