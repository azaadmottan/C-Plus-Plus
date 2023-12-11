#include<iostream>
using namespace std;

int main()
{
    int a[50],b[50],i,j = 0,k = 0,n;                     // 1D array

    for(i = 100; i < 200; i++)
    {
        if(i%2 == 0)
        {
            a[j] = i;
            j++;
        }
        else
        {
            b[k] = i;
            k++;
        }
    }

    cout<<"Even numbers are : ";
    for(i = 0; i < 50; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nOdd numbers are : ";
    for(i = 0; i < 50; i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}