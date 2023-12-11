#include<iostream>
using namespace std;

class sum                       // class is the combination of data member and member function put together into a single unit
{
    private : 
            int a,b;            // data member (variable)
             
    public : 
            void getdata();     // member function (function)
            void putdata();
};

void sum :: getdata()           // function_return_type class_name :: function_name
{
    cout<<"Enter two numbers : ";
    cin>>a>>b;
}

void sum :: putdata()
{
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<(a + b);
}

int main()
{                               // creation of an object
    sum s;                      // class_name object_name;

    s.getdata();                // object_name.function_name();

    s.putdata();

    return 0;
}