#include<iostream>
using namespace std;

int main()
{
    int n,i,j=0,rev = 0;

    cout<<"Enter any positive (n) number of digit : ";
    cin>>n;

    for(i = n; i > 0; i = i/10)
    {
        j = i % 10;
        rev = (rev * 10) + j;
        // cout<<rev<<endl;
    }
    
    if(rev == n)
    {
        cout<<"\n("<<rev<<" == "<<n<<") It is palindrome number\n"<<endl;

    }
    else 
    {
        cout<<"\n("<<rev<<" != "<<n<<") It is not palindrome number\n"<<endl;
    }

    return 0;
}