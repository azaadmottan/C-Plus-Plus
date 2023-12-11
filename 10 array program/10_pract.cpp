#include<iostream>
using namespace std;

int main()
{
    int a[2][3],b[3][2],c[2][2],sum;

    cout<<"Enter the elements of matrix (A) : ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of matrix (B) : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Matrix (A): \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"Matrix (B): \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }    

    cout<<"Multiplication of two matrix : \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;           
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
       

    return 0;
}