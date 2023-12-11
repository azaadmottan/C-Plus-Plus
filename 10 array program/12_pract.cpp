#include<iostream>
using namespace std;

int main()
{
    int rowA, colA, rowB, colB;

    cout<<"Enter the number of rows of matrix (A): ";
    cin>>rowA;
    cout<<"Enter the number of columns of matrix (A): ";
    cin>>colA;

    cout<<"\nEnter the number of rows of matrix (B): ";
    cin>>rowB;
    cout<<"Enter the number of columns of matrix (B): ";
    cin>>colB;

    if (colA == rowB)
    {
        int **matrixA = new int *[rowA];
        for (int i = 0; i < rowA; i++)
        {
            matrixA[i] = new int [colA];
        }
        
        int **matrixB = new int *[rowB];
        for (int i = 0; i < rowB; i++)
        {
            matrixB[i] = new int [colB];
        }

        int **matrixC = new int *[rowA];
        for (int i = 0; i < rowA; i++)
        {
            matrixC[i] = new int [colB];
        }
        
        cout<<"\n\nEnter the element of matrix (A): ";
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
            {
                cin>>matrixA[i][j];
            }
            
        }

        cout<<"\nEnter the element of matrix (B): ";
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                cin>>matrixB[i][j];
            }
            
        }

        cout<<"\nMultiplication of two matrix :\n";
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                matrixC[i][j] = 0;
                // int sum =0;
                for (int k = 0; k < rowB; k++)
                {
                    matrixC[i][j] = matrixC[i][j] + matrixA[i][k] * matrixB[k][j];
                    // cout<<"  sum"<<sum<<" "<<matrixA[i][k]<<" "<<matrixB[k][j];
                    // sum = sum + matrixA[i][k] * matrixB[k][j];
                }
                // matrixC[i][j] = sum;
            }
            // cout<<endl;
        }

        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                cout<<matrixC[i][j]<<"\t";

                // cout<<i<<" "<<j<<"\t";
            }
            cout<<endl;            
        }
    }
    else 
    {
        cout<<"\nMultiplication of "<<rowA<<" X "<<colA<<" and "<<rowB<<" X "<<colB<<" matrix is not possible !"<<endl;
    }

    return 0;
}