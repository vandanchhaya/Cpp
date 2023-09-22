//Write a C++ program that declares student structure with the data member name, std, percentage. Take value of these data and display it.
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
struct student
{
    string name;
    int std;
    float per;
};
int main()
{
    student S1,S2,S3;
    cout<<"Enter your name :: ";
    getline(cin,S1.name);
    cout<<"Enter your standard :: ";
    cin>>S2.std;
    cout<<"Enter your percentage :: ";
    cin>>S3.per;

    cout<<"\nName of the student is :: "<<S1.name<<endl;
    cout<<"Standard of the student is :: "<<S2.std<<endl;
    cout<<"Percentage of the student is :: "<<S3.per<<endl;
    return 0;
}