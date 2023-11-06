// Write a C++ program to demonstrate the use of Static Member Function
#include <iostream>
using namespace std;
class object 
{
    public:
        static void staticFunction() 
        {
            cout << "This is a static member function." << endl;
        }
        void regularFunction() 
        {
            cout << "This is a regular member function." << endl;
        }
};

int main() 
{
    object::staticFunction();
    object o1;
    o1.regularFunction();

    return 0;
}
