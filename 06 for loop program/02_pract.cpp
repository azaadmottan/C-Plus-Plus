#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l,n;

    cout<<"Enter number of rows :";
    cin>>n;
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        for(l = i-1; l >= 1; l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}