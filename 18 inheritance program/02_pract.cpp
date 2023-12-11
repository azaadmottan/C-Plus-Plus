#include<iostream>
using namespace std;

class A                         // base class
{
    protected :
            int a;

    public :
            int geta();
            void getdata1();
};

class B : public A              // derived class        syntax: class <derived_class_name> : [visibility_mode] <base_class_name>    
{
    private :                   // derived class access data(in visibility mode)  
             int b;             
                                // private mode(private not access, protected in private, public in private)
    public :                    // protected mode(private not acess, protected in protected, public in protected)
            void getdata2();    // public mode(private not access, protected in protected,public in public)
            void putdata();
};

void A :: getdata1()
{
    cout<<"Enter the value of a : ";
    cin>>a;
}

void B :: getdata2()
{
    cout<<"Enter the value of b : ";
    cin>>b;
}

void B :: putdata()         // when data member is protected they behave like public in derived class (inheritance)
{
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
}

int main()
{
    B b;

    b.getdata1();           // object create only derived class
    b.getdata2();
    b.putdata();

    return 0;
}