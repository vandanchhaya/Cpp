//Write a C++ program to define function outside the class using scope resolution operator
//Vandan Chhaya
//220130318051
#include <iostream>
using namespace std;
class temp 
{
    public:
        void display();
};
void temp::display() 
{
    cout << "Hello Welcome to DSU" <<endl;
}

int main() 
{
    temp t;
    t.display();
    
    return 0;
}
