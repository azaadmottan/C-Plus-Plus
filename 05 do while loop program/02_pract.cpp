#include<iostream>
using namespace std;

int main()
{
    int i=1,j,k=1;

    cout<<"Pascal triangle: \n";

    do
    {
        j = 1;

        do
        {
            cout<<k<<" ";

            k++;
            j++;

        } while (j < i + 1);
        
        cout<<"\n";
        
        i++;

    } while (i < 6);

    return 0;
}