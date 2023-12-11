#include<iostream>
using namespace std;

class A
{
    public : 
            void putdata()
            {
                cout<<"In class A\n";
            }
};

class B : public A
{
    public :
            void putdata()                 // ambiguity or function overriding
            {
                cout<<"In class B\n";
                A :: putdata();            // we can also call from derived class
            }
};

int main()
{
    B bb;
    bb.putdata();
    // bb.A :: putdata();                     // override function 

    return 0;
}