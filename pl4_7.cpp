// Write a C++ program to demonstrate use of Friend Function
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

        }
                
        void putdata()
        {
        
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