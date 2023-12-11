#include<iostream>
using namespace std;

int main()
{
    int size,pos,element,small,big;
    
    cout<<"Enter the size of an array : ";
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the elements of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    big = arr[0];
    small = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];        
        }

        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    
    cout<<"Smallest number : "<<small<<endl;
    cout<<"Bigest number : "<<big;

    return 0;
}