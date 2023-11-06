// Write a C++ program to demonstrate use of Multiple Inheritance
// Vandan Chhaya
// 220130318051
#include<iostream>
using namespace std;
class Liquid
{
    public:
    void display1()
    {
        cout<<"\nLiquid class";
    }
};
class Fuel
{
    public:
    void display2()
    {
        cout<<"\nFuel class";
    }
};
class Petrol:public Liquid,public Fuel
{
    public:
    void display3()
    {
        cout<<"\nPetrol class";
    }
};

int main()
{
    Liquid l; Fuel f;
    Petrol p; 
    l.display1(); 
    f.display2(); 
    p.display3(); 
    p.display2(); 
    p.display1();
}