// Reading from a text file test.txt using C++ FileStream Programming
// Vandan Chhaya
// 220130318051
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{
    ifstream inputFile("test.txt"); 

    if (!inputFile)     
    {
        cerr << "Failed to open the file for reading." << endl;
        return 1;
    }
    string line;
    while (getline(inputFile, line)) 
    {
        cout << line << endl;
    }

    inputFile.close();
    return 0;
}