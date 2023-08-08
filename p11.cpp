//Write C++ Program To Find If A Character Is Vowel Or Consonant using function
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
bool V(char ch) 
{
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() 
{
    char ch;

    cout << "Enter any character you want : ";
    cin >> ch;

    if (isalpha(ch)) 
    {
        if (V(ch)) 
        {
            cout << ch << " is a vowel." << endl;
        } 
        else 
        {
            cout << ch << " is a consonant." << endl;
        }
    } 
    else 
    {
        cout << "Invalid input. Please enter a valid character." << endl;
    }

    return 0;
}
