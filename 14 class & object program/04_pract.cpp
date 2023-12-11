#include<iostream>
using namespace std;

class max_min
{
    private : 
            int a,b;

    public : 
            void getdata();
            void putdata();
};

void max_min :: getdata()
{
    cout<<"Enter two number : ";
    cin>>a>>b;
}

void max_min :: putdata()
{
    if(a > b)
    {
        cout<<a<<" > "<<b;
    }
    else if(a < b)
    {
        cout<<a<<" < "<<b;
    }
    else 
    {
        cout<<a<<" == "<<b;
    }
}

int main()
{
    max_min x;

    x.getdata();

    x.putdata();

    return 0;
}