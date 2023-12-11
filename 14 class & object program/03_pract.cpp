#include<iostream>
using namespace std;

class post_negt
{
    private : 
            int a;

    public : 
            void getdata();
            void putdata();
};

void post_negt :: getdata()
{
    cout<<"Enter an integer : ";
    cin>>a;
}

void post_negt :: putdata()
{
    if(a > 0)
    {
        cout<<a<<" is positive number";
    }
    else if(a < 0)
    {
        cout<<a<<" is negative number";
    }
    else 
    {
        cout<<a<<" is zero (neutral)";
    }
}

int main()
{
    post_negt x;

    x.getdata();

    x.putdata();

    return 0;
}