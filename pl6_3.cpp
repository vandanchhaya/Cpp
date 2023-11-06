// Write a Program to read a text file and count number of characters in it
// Vandan Chhaya
// 220130318051
#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ifstream inputFile("input.txt");

    if (!inputFile) {
        cerr << "Failed to open the file for reading." << endl;
        return 1;
    }

    int Count = 0;
    char ch;

    while (inputFile.get(ch)) {
        Count++;
    }
    inputFile.close();
    cout << "Number of characters in the file: " << Count << endl;
    return 0;
}