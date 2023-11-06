#include <iostream>
using namespace std;
class Item 
{
    private:
        int number;
        double cost;

    public:
        void displaydata() 
        {
            cout << "Number: " << number << endl;
            cout << "Cost: " << cost << endl;
        }
    friend void getdata(Item &item);
};

void getdata(Item &item) 
{
    cout << "Enter the number: ";
    cin >> item.number;
    cout << "Enter the cost: ";
    cin >> item.cost;
}

int main() 
{
    Item item;
    getdata(item);
    item.displaydata();

    return 0;
}
