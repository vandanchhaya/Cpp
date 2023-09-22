// Write a C++ program to demonstrate use of class employee.(*Variable declares in private section & method declaration in public)
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class employee
{
    private:
        string name, branch;
        int emp_salary, emp_ID;

    public:
        void get_details()
        {
            cout<<"Enter your Name :: ";
            getline(cin,name);
            cout<<"Enter your Branch :: ";
            getline(cin, branch);
            cout<<"Enter the salary :: ";
            cin>>emp_salary;
            cout<<"Enter your ID number :: ";
            cin>>emp_ID;
        }

        void display_details()
        {
            cout<<"\nName is :: "<<name<<endl;
            cout<<"Branch is :: "<<branch<<endl;
            cout<<"Salary is :: "<<emp_salary<<endl;
            cout<<"Employee ID number is :: "<<emp_ID<<endl;
        }
};
int main()
{
    employee e1;
    e1.get_details();
    e1.display_details();
}