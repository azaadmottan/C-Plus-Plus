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
            void static funct();         // static member function 
};

int data :: c;                           // data member declaration

void data :: getdata()
{
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;  
    c++;                                // by default the static value of i is 0
}

void data :: putdata()
{
    cout<<"\nThe value of a : "<<a<<"\nThe value of b : "<<b;
}

void data :: funct()                     // member function defination
{
    cout<<"\nThe value of static variable is "<<c;
}

int main()
{
    data d1,d2;

    d1.getdata();
    d2.getdata();

    d1.putdata();
    data :: funct();                     // member function call

    d2.putdata();
    data :: funct();                     // member function call

    return 0;
}