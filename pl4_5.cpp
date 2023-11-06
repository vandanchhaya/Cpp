// Write a C++ program to demonstrate use of Returning Object as an argument
#include <iostream>
using namespace std;
class Number 
{
    private:
        int value;
    
    public:
        Number(int val) : value(val) {}
        Number add(Number other)
        {
            int result = value + other.value;
            return Number(result);
        }
        void display()
        {
            cout << "Value: " << value << endl;
        }
};
int main()
{
    Number num1(5);
    Number num2(10);

    Number sum = num1.add(num2);
    sum.display();

    return 0;
}