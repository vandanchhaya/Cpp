//Write C++ program to find factorial of the given number with the use of function
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;
int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}
int main() 
{
    int num;
    cout << "Enter any positive number : ";
    cin >> num;
    if (num < 0) 
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    } 
    else 
    {
        int fact = factorial(num);
        cout << "Factorial of " << num << " is " << fact << endl;
    }
    return 0;
}
