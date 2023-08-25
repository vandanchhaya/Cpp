//Write a C++ program for setfill function
//Vandan Chhaya
//220130318051
#include <iostream>
#include <iomanip> 
using namespace std;
int main() 
{
    int number = 123;
    
    cout << "The value is : " << setfill('#') << setw(10) << number << endl;
    
    return 0;
}
