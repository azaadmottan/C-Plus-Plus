#include<iostream>
using namespace std;

int main()
{
    int size,count;

    cout<<"Enter the size of an array : ";
    cin>>size;

    int *arr = new int[size];                    // dynamic array
    int *freq = new int[size];

    cout<<"Enter the elements of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        freq[i] = 1;
    }
    
    for (int i = 0; i < size; i++)
    {
        count = 1;     

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
                // freq[i] = count;
                // cout<<arr[i]<<" occurs "<<count<<" times\n";
            }   
        }

        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
        {
            cout<<arr[i]<<" occurs "<<freq[i]<<" times\n";
        }
    }
    

    return 0;
}