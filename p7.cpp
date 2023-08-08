//Write C++ program to find simple interest
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;
int main() 
{
    float principal, rate, time, simpleInterest;

    cout <<"Enter the principal amount: ";
    cin >> principal;

    cout <<"Enter the rate of interest (in percentage): ";
    cin >> rate;

    cout <<"Enter the time period (in years): ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;

    cout <<"Simple Interest = " << simpleInterest << endl;

    return 0;
}
