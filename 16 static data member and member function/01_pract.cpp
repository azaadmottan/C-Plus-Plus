#include<iostream>
using namespace std;

class data
{
    private : 
            int a,b;
            static int c;                // static data member 
    
    public : 
            void getdata();
            void putdata();
};

int data :: c;                           // static data member declaration

void data :: getdata()
{
    cout<<"\nEnter the value of a and b : ";
    cin>>a>>b;  
    c++;                               // by default the static value of i is 0
}

void data :: putdata()
{
    cout<<"\nThe value of a : "<<a<<"\nThe value of b : "<<b<<"\nThe value of c : "<<c;
}

int main()
{
    data d1,d2;

    d1.getdata();
    d1.putdata();

    d2.getdata();
    d2.putdata();

    return 0;
}