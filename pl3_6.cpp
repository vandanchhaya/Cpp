//Write a C++ program to create class shape with public data member's height and base. Member function are display_shape()
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;

class Shape 
{
    public:
        float height;
        float base;
    
    void display_shape();
};
    void Shape::display_shape() 
    {
        cout << "\nHeight: " << height << endl;
        cout << "Base: " << base << endl;
    }

int main() 
{
    Shape S1;
    
    cout<<"Enter the haight :: ";
    cin>>S1.height;
    cout<<"Enter the base :: ";
    cin>>S1.base;
    S1.display_shape();
    
    return 0;
}
