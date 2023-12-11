#include<iostream>
using namespace std;

class base 
{
    public :
        base(int n)
        {
            cout<<"Base class constructor !"<<endl;
        }
        ~base()
        {
            cout<<"Base class destructor !"<<endl;
        }
};

class derive1 : public base
{
    public :
        derive1(int m) : base(m)
        {
            cout<<"Derived(1) class constructor !"<<endl;
        }
        ~derive1()
        {
            cout<<"Derived(1) class destructor !"<<endl;
        }
};

class derive2 : derive1
{
    public :
        derive2(int m, int n) : derive1(m)
        {
            cout<<"Derived(2) class constructor !"<<endl;
        }
        ~derive2()
        {
            cout<<"Derived(2) class destructor !"<<endl;
        }
};

int main()
{
    derive2 obj(2,4);       // In an inheritance each default constructor invoke its parent default constructor
                            // before it executes itself 
                            // and each destructor invoke its parent destructor after itself execute
    return 0;
}