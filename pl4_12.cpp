// Write a C++ program to demonstrate use of copy constructor
#include <iostream>
using namespace std;
class MyObject 
{
    public:
        MyObject(int value) : data(value) 
        {
            cout << "Constructor called" << endl;
        }
        MyObject(const MyObject &other) : data(other.data) 
        {
            cout << "Copy constructor called" << endl;
        }
        void DisplayData() 
        {
            cout << "Data: " << data << endl;
        }
    private:
        int data;
};
int main() 
{
    MyObject obj1(42);
    MyObject obj2 = obj1;

    cout << "Object 1: ";
    obj1.DisplayData();

    cout << "Object 2: ";
    obj2.DisplayData();

    return 0;
}