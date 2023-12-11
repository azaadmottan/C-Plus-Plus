#include<iostream>
using namespace std;

class base 
{
    public :
            virtual void display() = 0;   // pure virtual function it is also known as 'do-nothing function'.     
};                                        // abstraction can be achieved by creating pure virtual function in base class

class Derived : public base
{
    public :
            void display()
            {
                cout<<"Derived class is derived from base class";
            }
};

int main()
{
    // base obj;                // object of base class is not allowed in abstraction (pure virtual function)

    Derived dd;
    base *ptr;



    ptr = &dd;

    ptr -> display();

    return 0;
}