//Write a C program to enter two numbers and perform all arithmetic operations
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,mul,div;

    cout<<"Enter the value of number 1 : ";
    cin>>a;
    cout<<"Enter the value of number 2 : ";
    cin>>b;

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    cout<<"Sum of both numbers is :: "<<sum<<endl;
    cout<<"Substraction of both numbers is :: "<<sub<<endl;
    cout<<"Multiplication of both numbers is :: "<<mul<<endl;
    cout<<"Division of both numbers is :: "<<div<<endl;

    return 0;
}