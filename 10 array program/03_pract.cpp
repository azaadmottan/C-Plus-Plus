#include<iostream>
using namespace std;

int main()
{
    int a[5],b[5],x[10],i,j=0,k=0;                       // 1D array

    cout<<"Enter any 10 positive integer : ";
    for(i = 0; i < 10; i++)
    {
        cin>>x[i];
    }

    for(i = 0; i < 10; i++)
    {
        if(x[i]%2 == 0)
        {
            a[j] = x[i];
            j++;
        }
        else
        {
            b[k] = x[i];
            k++;
        }
    }

    cout<<"Even numbers are : ";
    for(i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nOdd numers are : ";
    for(i = 0; i < 5; i++)
    {
        cout<<b[i]<<" ";
    }
    
    return 0;
}