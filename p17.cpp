//Write C++ Program to For Fibonacci Number using function
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;

int Fibonacci(int n) 
{
    int first = 0, second = 1;
    cout << "Fibonacci Series (first " << n << " numbers): ";
    for (int i = 0; i < n; i++) 
    {
        if (i == 0) 
        {
            cout << first;
        } 
        else if (i == 1)
        {
            cout << ", " << second;
        } 
        else 
        {
            int next = first + second;
            cout << ", " << next;
            first = second;
            second = next;
        }
    }
    cout << endl;
}
int main() 
{
    int n;    
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;
    if (n <= 0) 
    {
        cout << "Please enter a positive integer." << endl;
        return 1; 
    }
    Fibonacci(n);    
    return 0;
}
