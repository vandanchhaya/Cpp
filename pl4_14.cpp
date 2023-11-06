// Write a C++ program to print message when object gets destroyed using destructor
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class Marks
{
    public:
        int maths, science;
    
    Marks() 
    {
        cout << "Inside Constructor"<<endl;
        cout << "C++ Object created"<<endl;
    }
    ~Marks() 
    {
        cout << "Inside Destructor"<<endl;
        cout << "C++ Object destructed"<<endl;
    }
};
int main( )
{
    Marks m1;  
    return 0;
}