//Write a C program to enter length and breadth of a rectangle and find its perimeter & area
#include<iostream>
using namespace std;
int main()
{
    int l,b,area,peri;

    cout<<"Enter the length of rectangle : ";
    cin>>l;
    cout<<"Enter the breath of rectangle : ";
    cin>>b;

    area=l*b;
    peri=2*(l+b);

    cout<<"Area of rectangle is :: "<<area<<endl;
    cout<<"Perimeter of rectangle is :: "<<peri<<endl;

    return 0;
}