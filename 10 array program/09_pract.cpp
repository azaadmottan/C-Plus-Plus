#include<iostream>
using namespace std;

int main()
{
    int arr[2][3];

    cout<<"Enter the elements of matrix : ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"The given matrix : \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"Transpose of matrix :\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr[j][i]<<"\t";
        }
        cout<<"\n";
    }
    
    return 0;
}