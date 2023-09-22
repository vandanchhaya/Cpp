//Write a C++ program to create class Max with data member's num_1 and num_2. Member function are input(), display(), largest().
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class Max
{
    public:
        int num_1, num_2;
        void input()
        {
            cout<<"Enter number 1 :: ";
            cin>>num_1;
            cout<<"Enter number 2 :: ";
            cin>>num_2;
        }

        void display()
        {
            cout<<"Number 1 is :: "<<num_1<<endl;
            cout<<"Number 2 is :: "<<num_2<<endl;
        }

        void largest()
        {
            if (num_1 > num_2) 
            {
                cout << "\nThe largest number is :: " << num_1 << endl;
            } 
            else if (num_2 > num_1) 
            {
                cout << "The largest number is :: " << num_2 << endl;
            } 
            else 
            {
                cout << "Both numbers are equal." << endl;
            }
        }
};
int main()
{
    Max m;
    m.num_1;
    m.num_2;
    m.input();
    m.display();
    m.largest();
    return 0;
}