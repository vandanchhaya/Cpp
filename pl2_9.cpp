//Write a c++ program to add two numbers using Scope Resolution operator
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;
int main() 
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int sum = num1 + num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
