#include<iostream>
using namespace std;

class odd_even
{
    private : 
            int a;

    public : 
            void getdata();
            void putdata();
};

void odd_even :: getdata()
{
    cout<<"Enter a number : ";
    cin>>a;
}

void odd_even :: putdata()
{
    if(a % 2 == 0)
    {
        cout<<a<<" is even number";
    }
    else 
    {
        cout<<a<<" is odd number";
    }
}

int main()
{
    odd_even x;

    x.getdata();

    x.putdata();

    return 0;
}