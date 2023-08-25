//Write a C++ program to overload a function named 'area'
//Vandan Chhaya
//220130318051
#include <iostream>
#define PI 3.14
using namespace std;

float area(float length, float width)
{
    return length * width;
}
float area(float radius) 
{
    return PI * radius * radius;
}
int area(int side) 
{
    return side * side;
}
int main() 
{
    float length, width, radius;
    int side;

    cout << "Enter the length of a rectangle : ";
    cin >> length;
    cout << "Enter the width of a rectangle : ";
    cin >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    cout << "Enter the radius of a circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    cout << "Enter the side length of a square: ";
    cin >> side;
    cout << "Area of the square: " << area(side) << endl;

    return 0;
}
