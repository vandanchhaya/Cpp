// Write a C++ program to demonstrate order of constructor calls in Multiple Inheritance
// Vandan Chhaya
// 220130318051
#include<iostream>
using namespace std;
class Base1 
{
    public:
        Base1() 
        {
            cout << "Constructor of Base1" << endl;
        }
};

class Base2 
{
    public:
        Base2() 
        {
            cout << "Constructor of Base2" << endl;
        }
};

class Derived : public Base1, public Base2 
{
    public:
        Derived() 
        {
            cout << "Constructor of Derived" << endl;
        }
};

int main() 
{
    Derived derivedObj;
    return 0;
}