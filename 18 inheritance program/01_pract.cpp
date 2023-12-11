#include<iostream>
using namespace std;

class A                     // base class (parent or super class)        single inheritance
{
    private :
            int a;

    public :
            int geta();
            void getdata1();
};

class B : public A          // derived class (child or sub class)       syntax: class <derived_class_name> : [visibility_mode] <base_class_name>    
{
    private :                       // derived class access data(in visibility mode)  
             int b;             
                                    // private mode(private not access, protected in private, public in private)
    public :                        // protected mode(private not acess, protected in protected, public in protected)
            void getdata2();        // public mode(private not access, protected in protected,public in public)
            void putdata();         // derived class can't access private data of base class
};

int A :: geta()                     // synatx: <return_type_of_function> <class_name> :: <function_name()>{}
{
    return a;
}
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

void B :: putdata()
{
    cout<<"Sum of "<<geta()<<" and "<<b<<" is "<<geta()+b;
}

int main()
{
    B b;                          // object create only derived class

    b.getdata1();      
    b.getdata2();
    b.putdata();

    return 0;
}