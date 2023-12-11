#include<iostream>
using namespace std;

int main()
{
    int size,pos,element;
    
    cout<<"Enter the size of an array : ";
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the elements of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Reverse array: ";
    for (int i = 0; i < size / 2; i++)
    {
        int first = arr[i];
        int second = arr[size-i-1];
        arr[size-i-1] = first;
        arr[i] = second;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}