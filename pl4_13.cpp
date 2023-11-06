//Write a C++ program to demonstrate use of Destructor
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class rectangle
{
    int length, width;
    public:
        rectangle()
        {
            length=0;
            width=0;
            cout<<”Constructor Called”;
        }
    ~rectangle()
    {
        cout<<”Destructor Called”;
    }
};
int main()
{
    rectangle x;
}