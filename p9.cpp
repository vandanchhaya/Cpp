//Write C++ Program to Check Even or Odd Integers
#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter any number to check whether the number is odd or even : ";
    cin>>n;

    if(n%2==0)
    {
        cout<<"The number you entered is Even...";
    }
    else
    {
        cout<<"The number you entered is Odd...";
    }
    return 0;
}