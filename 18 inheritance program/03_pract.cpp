#include<iostream>
using namespace std;

class A
{
    protected :
               int a;

    public : 
            void geta()
            {
                cout<<"Enter the value of a : ";
                cin>>a;
            }
};

class B 
{
    protected :
               int b;

    public :
            void getb()
            {
                cout<<"Enter the value of b : ";
                cin>>b;
            }
};

class C : public A, public B                                    // multiple inheritance
{
    public :
            void putdata()
            {
                cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
            }
};


int main()
{
    C c;

    c.geta();
    c.getb();

    c.putdata();

    return 0;    
}