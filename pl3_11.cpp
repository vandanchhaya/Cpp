// Create class product. Data members are product_id, product_name, unit_price. Member function are getData() and putData(). Call both member function for two objects.
//Vandan Chhaya
//220130318051
#include<iostream>
using namespace std;
class Product
{
    private:
        int product_id, unit_price;
        string product_name;
    
    public:
        void getData()
        {
            cout<<"Enter the Product ID number :: ";
            cin>>product_id;
            cin.ignore();
            cout<<"Enter your name :: ";
            getline(cin,product_name);
            cout<<"Enter the Unit Price :: ";
            cin>>unit_price;
        }

        void putData()
        {
            cout<<"Product ID number is :: "<<product_id<<endl;
            cout<<"Name is :: "<<product_name<<endl;
            cout<<"Unit Price is :: "<<unit_price;
        }
};
int main()
{
    // Product p1;
    // p1.getData();
    // p1.putData();
    Product p1, p2;

    cout << "Enter details for Product 1:" << endl;
    p1.getData();

    cout << "Enter details for Product 2:" << endl;
    p2.getData();

    cout << "\nProduct 1 Details:" << endl;
    p1.putData();

    cout << "\nProduct 2 Details:" << endl;
    p2.putData();
    return 0;
}