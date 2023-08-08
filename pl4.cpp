//Write a C program to enter radius of a circle and find its diameter,circumference and area
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
int main()
{
    int r,dia,circum,area;

    cout<<"Enter the radius of circle : ";
    cin>>r;

    dia=2*r;
    circum=2*3.14*r;
    area=3.14*r*r;

    cout<<"Diameter of circle is :: "<<dia<<endl;
    cout<<"Circumference of circle is :: "<<circum<<endl;
    cout<<"Area of circle is :: "<<area<<endl;

    return 0;
}
