#include <iostream>
using namespace std;

int main()
{
    //Write your code here
    int size, step;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int *arr = new int[size];
    
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the number of steps to rotate the array to the left: ";
    cin>>step;

    for(int i = 0; i < step; i++)
    {
        int swap = arr[0];
        for(int j = 0; j < size; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[size-1] = swap;
    }

    cout<<"Rotated array: ";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}