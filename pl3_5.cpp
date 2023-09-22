//Write a C++ program to create class distance with private data member's feet and inches. Member function are get_distance() and display_distance().
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class Distance
{
    private:
        float feet;
        float inches;
    public:
        void get_distance()
        {
            cout<<"Enter distance in feet :: ";
            cin>>feet;
            cout<<"Enter distance in inches :: ";
            cin>>inches;
        }
        void display_distance()
        {
            cout<<"Distance in feet is :: "<<feet<<endl;
            cout<<"Distance in inches is :: "<<inches<<endl;
        }
};
int main()
{
    Distance s1;
    s1.get_distance();
    s1.display_distance();
    return 0;
}