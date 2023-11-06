// Write a C++ program to demonstrate use of passing object as an argument.
#include <iostream>
using namespace std;
class demo
{
    private:
        string value;
    
    public:
        demo(string val) : value(val){}
        string getdata()
        {
            return value;
        }
};
void putdata(demo obj)
{
    cout<<obj.getdata()<<endl;
}
int main()
{
    demo obj("Enrollment number is 51");

    putdata(obj);

    return 0;
}