    // Write a C++ program that create a class - "Employee" that has data members emp_id & emp_name and member function are getdata & putdata. Write a main function to create emp, an array of Employee objects. Accept and display the details of atleast 10 employees
#include<iostream>
using namespace std;
class employee
{
    private:
        string emp_name;
        int emp_id;

    public:
        void getdata()
        {
            cout<<"Enter the Employee Name :: ";
            cin>>emp_name;
            cout<<"Enter the Employee ID :: ";
            cin>>emp_id;
        }
        void putdata()
        {
            cout<<"\nEmployee Name is :: "<<emp_name<<endl;
            cout<<"Employee ID is :: "<<emp_id<<endl;
        }
};
int main()
{
    employee E1[10];
    for(int i=0;i<10;i++)
    {
        E1[i].getdata();
    }   
    for(int i=0;i<10;i++)
    {
        E1[i].putdata();
    }
    return 0;
}