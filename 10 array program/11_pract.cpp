#include<iostream>
using namespace std;

int main()
{
    int rowA, columnA, rowB, columnB, A[25][25], B[25][25], C[25][25], sum;
    cout<<"Enter the number of rows of matrix A: ";
    cin>>rowA;

    cout<<"Enter the number of columns of matrix A : ";
    cin>>columnA;
    
    // int *A = new int[row1*columns1];

    cout<<"\nEnter the number of row of matrix B : ";
    cin>>rowB;
    cout<<"Enter the number of columns of matrix B : ";
    cin>>columnB;

    // int *C = new int[row2];

    if (columnA == rowB)
    {
        cout<<"\nEnter the elements of matrix A : ";
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnA; j++)
            {
                cin>>A[i][j];
            }
        }
        cout<<"Enter the elements of matrix B : ";
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                cin>>B[i][j];
            }
        }
        cout<<"\nMultiplication of two matrix : \n";
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                sum = 0;
                for (int k = 0; k < columnA; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
                C[i][j] = sum;           
            }
        }

        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                cout<<C[i][j]<<"\t";
            }
            cout<<"\n";
        }   
    }
    else
    {
        cout<<"\nMultiplication is not possible";
    }
    
    return 0;
}