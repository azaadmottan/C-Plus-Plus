#include<iostream>
using namespace std;

int main()
{
    int size,pos,new_element;

    cout<<"Enter the size of an array: ";
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the elemenets of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    call : 
    cout<<"Enter the position of an element where you have insert: ";
    cin>>pos;

    if (pos < 1 || pos > size + 1)
    {
        cout<<"Invalid position !\n";
        goto call;
    }
    else
    {
        size++;

        cout<<"Enter the element you have insert at position ("<<pos<<"): ";
        cin>>new_element;

        for (int i = size - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[pos - 1] = new_element;
    }
    
    cout<<"Inserted array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}