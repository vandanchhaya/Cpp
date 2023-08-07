//Write a C program to enter two numbers and find their sum
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;

    cout<<"Enter the number 1 : ";
    cin>>a;
    cout<<"Enter the number 2 : ";
    cin>>b;
    
    sum=a+b;

    cout<<"Sum of both numbers is :: "<<sum<<endl;
       return 0;
}