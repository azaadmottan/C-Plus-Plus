#include<iostream>
using namespace std;

class A
{
    protected :
            int x,y;
    
    public :
            void getdata()
            {
                cout<<"\nEnter the value of a :";
                cin>>x;
                cout<<"Enter the value of b:";
                cin>>y;
            }
};

class B : public A                                            // hierarchical inheritance
{
    public :
            void putdata1()
            {
                cout<<"\nSum of "<<x<<" and "<<y<<" is "<<x+y;
            }
};

class C : public A                                             // hierarchical inheritance
{
    public :
            void putdata2()
            {
                cout<<"\nProduct of "<<x<<" and "<<y<<" is "<<x*y;
            }
};

int main()
{
    B bb;
    bb.getdata();
    bb.putdata1();

    C cc;
    cc.getdata();
    cc.putdata2();

    return 0;
}