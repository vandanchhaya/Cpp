//Write a C++ program to check whether the number is palindrome or not using function
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;

bool P(int n) 
{
    int a = n;
    int b = 0;

    while (n > 0) 
    {
        int digit = n % 10;
        b = b * 10 + digit;
        n /= 10;
    }

    return a == b;
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (P(n)) 
    {
        cout << n << " is a palindrome." << endl;
    } 
    else 
    {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}
