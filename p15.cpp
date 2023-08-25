//Write C++ Program to Check Whether a Number is Prime or Not using function
//Vandan Chhaya
//220130318051
#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int num) 
{
    if (num <= 1) 
    {
        return false;
    }
    if (num == 2) 
    {
        return true;
    }
    if (num % 2 == 0) 
    {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPrime(num)) 
    {
        cout << num << " is a prime number." << endl;
    } 
    else 
    {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}