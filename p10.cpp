//Write C++ Program to Find Largest Among 3 Numbers
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, largest;

    cout <<"Enter the number 1 : ";
    cin >> num1;
    cout <<"Enter the number 2 : ";
    cin >> num2;
    cout <<"Enter the number 3 : ";
    cin >> num3;

    largest = num1;
        if (num2 > largest) 
        {
            largest = num2;
        }
        if (num3 > largest) 
        {
            largest = num3;
        }

    cout << "The largest number is : " <<largest<< endl;

    return 0;
}
