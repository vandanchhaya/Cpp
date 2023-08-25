//Write a C++ program to demonstrate use of constant arguments
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
int test(const int);
int main()
{
    cout<<test(5);
    return 0;
}
int test(const int z)
{
    //z = z + 5;
    return z;
}