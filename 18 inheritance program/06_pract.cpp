#include<iostream>
using namespace std;

class A
{
    public :
            void putdata1()
            {
                cout<<"\nIn class A";
            }
};

class B : public A
{
    public :
            void putdata2()
            {
                cout<<"\nIn class B";
            }
};

class C //: public A
{
    public :
            void putdata3()
            {
                cout<<"\nIn class C";
            }
};

class D : public B, public C             // hybrid inheritance (hybrid mean combination of two inheritance function)
{
    public :
            void putdata4()
            {
                cout<<"\nIn class D";
            }
};

int main()
{
    D dd;
    dd.putdata1();
    dd.putdata2();
    dd.putdata3();
    dd.putdata4();

    return 0;
}