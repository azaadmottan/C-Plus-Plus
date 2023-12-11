#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l,n;

    cout<<"Enter number of rows :";
    cin>>n;
    
    i=1;
    while(i <= n)
    {
        j=1;

        while(j <= n-i)
        {
            cout<<" ";
            j++;
        }

        k=1;

        while(k <= i)
        {
            cout<<k;
            k++;
        }

        l=i-1;
        
        while(l >= 1)
        {
            cout<<l;
            l--;
        }

        {
            cout<<endl;
        }
        
        i++;
    }

    return 0;
}