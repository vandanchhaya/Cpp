//Write C++ Program to Check Armstrong Number using function
//Vandan Chhaya
//220130318051
#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num) 
{
    int count = 0;
    while (num > 0) 
    {
        num /= 10;
        count++;
    }
    return count;
}
int isArmstrong(int num) 
{
    int originalNum = num;
    int sum = 0;
    int numDigits = countDigits(num);

    while (num > 0) 
    {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    return (sum == originalNum);
}
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num)) 
    {
        cout << num << " is an Armstrong number." << endl;
    } 
    else 
    {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
