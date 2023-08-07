//Write a C program to input elements in array and print all negative elements
//Write a C program to input elements in array and print all negative elements
#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements in array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Negative elements are : "<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}