//  Writing to a text file test.txt using C++ FileStream Programming
// Vandan Chhaya
// 220130318051
#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ofstream outputFile("test.txt"); 

    if (!outputFile) 
    {
        cerr << "Failed to open the file for writing." << endl;
        return 1;
    }
    outputFile << "Hello, World!" << endl;
    outputFile << "This is a test file." << endl;

    outputFile.close();

    cout << "Data has been written to the file." << endl;

    return 0;
}
