// Write a C++ Program to read a text file and copy it to another text file
// Vandan Chhaya
// 220130318051
#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ifstream inputFile("text.txt");

    if (!inputFile) 
    {
        cerr << "Failed to open the file for reading." << endl;
        return 1;
    }

    int characterCount = 0;
    char ch;

    while (inputFile.get(ch)) 
    {
        characterCount++;
    }
    inputFile.close();

    cout << "Number of characters in the file: " << characterCount << endl;

    return 0;
}
