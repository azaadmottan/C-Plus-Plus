#include<iostream>
using namespace std;

int main()
{
    int row, column;

    cout<<"Enter the number of rows: ";
    cin>>row;

    cout<<"Enter the number of columns: ";
    cin>>column;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int [column];
    }

    cout<<"Enter the element of an array: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"Array elements: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;        
    }
    
    return 0;
}