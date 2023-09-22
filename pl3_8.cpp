// Write a C++ program to demonstrate use of class account mamber is acc_no, balance, branch_code.(*Declare variable in public section and initialize the value with object name and display outside the class)
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class account
{
    public:
        int acc_no, balance, branch_code;
        void getdata();
        void displaydata();
};
int main()
{
    account a1;
    cout<<"Enter the Account number :: ";
    cin>>a1.acc_no;
    cout<<"Enter the Balance :: ";
    cin>>a1.balance;
    cout<<"Enter the Branch Code :: ";
    cin>>a1.branch_code;

    cout<<"\nAccount Number is :: "<<a1.acc_no<<endl;
    cout<<"Balance is :: "<<a1.balance<<endl;
    cout<<"Branch Code is :: "<<a1.branch_code<<endl;


    return 0;
}