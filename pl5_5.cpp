// Write a C++ program to demonstrate use of this pointer
// Vandan Chhaya
// 220130318051
#include<iostream>
using namespace std;
int main()
{
    int a = 50;
    int *p,**s;
    p = &a;
    s = &p;

    cout<<"\n*p : "<<*p;
    cout<<"\n*s : "<<*s;
    cout<<"\n**s : "<<**s;
    cout<<"\n*(*(&p)) : "<<*(*(&p));
    cout<<"\n***(&s) : "<<***(&s);
    
    return 0;
}