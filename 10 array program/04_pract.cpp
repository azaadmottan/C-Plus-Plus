#include<iostream>
using namespace std;

int main()
{
    int a[2][2],b[2][2],i,j,k;                             // 2D array

    cout<<"Enter the elements of 1st matrix : ";
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of 2nd matirx : ";
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cin>>b[i][j];
        }
    }
    
    cout<<"sum of two matrix is :\n";
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cout<<a[i][j] + b[i][j]<<"\t";
        }
        cout<<endl;
    }
}