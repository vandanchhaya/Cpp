//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class student
{
    public:
        string name;
        int age;
    public:
        void get_detail()
        {
            cout<<"Enter your name :: ";
            getline(cin,name);
            cout<<"Enter your age :: ";
            cin>>age;
        }
        void display_detail()
        {
            cout<<"Your name is :: "<<name<<endl;
            cout<<"Your age is :: "<<age<<endl;
        }
};
int main()
{
    student s1;
    s1.get_detail();
    //s1.name = s1.age;
    s1.display_detail();
    return 0;
}