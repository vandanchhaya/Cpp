//Write C++ program to find compound interest
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    float principal, rate, time, compoundInterest;

    cout <<"Enter the principal amount: ";
    cin >> principal;

    cout <<"Enter the rate of interest (in percentage): ";
    cin >> rate;

    cout <<"Enter the time period (in years): ";
    cin >> time;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    cout <<"Compound Interest = " << compoundInterest << endl;

    return 0;
}
