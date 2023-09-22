// Write a C++ program to declare structure of Employee with data members like emp_name, emp_code, emp_salary, emp_branch and also display contents/values of member variables.
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
struct employee
{
    string emp_name, emp_branch;
    int emp_code, emp_salary; 
};
int main()
{
    employee e1,e2,e3,e4;
    cout<<"Enter your name :: ";
    getline(cin,e1.emp_name);
    cout<<"Enter the code :: ";
    cin>>e2.emp_code;
    cout<<"Enter your salary :: ";
    cin>>e3.emp_salary;
    cout<<"Enter the branch :: ";
    cin>>e4.emp_branch;

    cout<<"\nName of the employee is :: "<<e1.emp_name<<endl;
    cout<<"The code is :: "<<e2.emp_code<<endl;
    cout<<"Salary of the employee is :: "<<e3.emp_salary<<endl;
    cout<<"Branch of employee is :: "<<e4.emp_branch<<endl;

    return 0;
}