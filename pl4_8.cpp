// Write a C++ program to Demonstrate use of Friend Function
#include <iostream>
using namespace std;
class Friend;

class MyClass 
{
    private:
        int privateValue;

    public:
        MyClass(int value) : privateValue(value) {}
        friend class Friend;
};
class Friend 
{
    public:
        void Private(MyClass& obj) 
        {
            cout << "\nValue accessed from friend class is : " << obj.privateValue << endl;
        }
};
int main() 
{
    int userValue;

    cout << "Enter a value: ";
    cin >> userValue;

    MyClass myObject(userValue);
    Friend friendObj;
    friendObj.Private(myObject);

    return 0;
}