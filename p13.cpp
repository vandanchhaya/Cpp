//Write a cpp program to calculate sum of first n natural number using function
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;

int sumofn(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        sum = sum + i;
    }
    return sum;
}

int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = sumofn(n);

    cout << "Sum of first " << n << " natural numbers is: " << result << endl;
    return 0;
}
