// Write a C++ program to calculate addition of two numbers using Friend Function
#include<iostream>
using namespace std;
class simple
{
    private:
        int no1, no2;
        friend void result (simple S);

    public:
        void getdata()
        {
            cout << "Enter number 1 :: ";
            cin >> no1;
            cout << "Enter number 2 :: ";
            cin >> no2;
        }
                
        void putdata()
        {
            cout << "\nNumber 1 is :: " << no1 << endl;
            cout << "Number 2 is :: " << no2 << endl;
        }
};
void result(simple S)
{
    int res = S.no1 + S.no2;
    cout << "\nResult is :: " << res;
}
int main()
{
    simple S1;
    S1.getdata();
    S1.putdata();
    result (S1);
    return 0;
}