#include<iostream>
using namespace std;

int main()
{
    int size,sum = 0;

    cout<<"Enter the size of an array : ";
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the element of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Sum of an array : ";
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum;
    
    return 0;
}