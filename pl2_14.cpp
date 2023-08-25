//Write a C++ program to calculate cube of given number using inline function
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
int cube(int a);
int main()
{
    int a;
    cout<<"Enter the number you want to cube :: ";
    cin>>a;
    cout<<"Cube of the number is :: "<<a<<endl;
    return 0;
}
int cube(int a)
{
    return(a * a * a); 
}