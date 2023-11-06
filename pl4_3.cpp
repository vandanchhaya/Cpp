// Write a C++ program using array of objects to compare SPI of 10 different students and print whose SPI is highest
#include <iostream>
#include <string>
using namespace std;
class Student 
{
    public:
        string name;
        float spi;

        Student(string n, float s) : name(n), spi(s) {}

        Student() : name(""), spi(0.0) {}
};
int main() 
{
    Student s1[10];
    for (int i = 0; i < 10; i++) 
    {
        cout << "\nEnter the name of Student " << i + 1 << ": ";
        cin >> s1[i].name;
        cout << "Enter the SPI of Student " << i + 1 << ": ";
        cin >> s1[i].spi;
    }
    int maxmarks = 0;
    
    for (int i = 1; i < 10; i++) 
    {
        if (s1[i].spi > s1[maxmarks].spi) 
        {
            maxmarks = i;
        }
    }
    cout << "\nStudent with the highest SPI:" << endl;
    cout << "Name: " << s1[maxmarks].name << endl;
    cout << "SPI: " << s1[maxmarks].spi << endl;

    return 0;
}
