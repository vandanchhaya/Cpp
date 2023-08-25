//Write a C++ program for setprecision() function
//Vandan Chhaya
//220130318051
#include <iostream>
#include <iomanip> 
using namespace std;
int main() 
{
    float n = 3.14159265358979323846;
    
    cout << "Value is : " << setprecision(10) << n << endl;

    return 0;
}
