// Write a C++ program to demonstrate use of Default Constructor
#include<iostream>
using namespace std;
class student
{
    public:
        int en_no;
        string name;
        student()
        {
            en_no=51;
            name="Vandan";
            cout<<"Default Constructor"<<endl;
        }
        void display()
        {
            cout<<"Enrollment number is :: "<<en_no<<endl;
            cout<<"Name is :: "<<name<<endl;
        }
};
int main()
{
    student s,s1;
    s.display();
    s1.display();
    return 0;
}