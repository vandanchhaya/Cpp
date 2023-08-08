//Write C++ Program To Print Multiplication Table of a Number
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;
int main()
{
    int number;
    
    cout << "Enter the number whose multiplication table you want to print: ";
    cin >> number;
    
    cout << "Multiplication Table of " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
    
    return 0;
}
