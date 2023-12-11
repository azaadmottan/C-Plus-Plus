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
    
    call:
    cout<<"Enter the position of an element which you have delete: ";
    cin>>pos;

    if (pos < 1 || pos > size)
    {
        cout<<"Invalid position !\n";
        goto call;
    }
    else
    {
        for (int i = pos - 1; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    size--;

    cout<<"Deleted array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}