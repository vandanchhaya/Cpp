// Write a C++ program using class to find maximum number from three numbers.
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class Max
{
    private:
        int no1,no2,no3;

    public:
        void get()
        {
            cout<<"Enter number 1 :: ";
            cin>>no1;
            cout<<"Enter number 2 :: ";
            cin>>no2;
            cout<<"Enter number 3 :: ";
            cin>>no3;
        }

        void display()
        {
            cout<<"\nNumber 1 is :: "<<no1<<endl;
            cout<<"Number 2 is :: "<<no2<<endl;
            cout<<"Number 3 is :: "<<no3<<endl;
        }

        void largest()
        {
            if (no1 >= no2 && no1 >= no3) 
            {
                cout << "\nThe largest number is :: " << no1 << endl;
            } 
            else if (no2 >= no1 && no2 >= no3) 
            {
                cout << "The largest number is :: " << no2 << endl;
            } 
            else 
            {
                cout << "The largest number is :: " << no3 << endl;
            }
        }
};
int main()
{
    Max obj;
    obj.get();
    obj.display();
    obj.largest();
    return 0;
} 