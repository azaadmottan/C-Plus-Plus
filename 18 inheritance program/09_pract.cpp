#include<iostream>
using namespace std;

class A
{
    protected :
                int a;
    
    public :
            A(int p)                             // constructure handling in inheritance 
            {
                a = p;
            }
            void putdata1()
            {
                cout<<"The value of a in A class : "<<a<<endl;
            }
};

class B
{
    protected :
                int b;

    public :
            B(int q)
            {
                b = q;
            }
            void putdata2()
            {
                cout<<"The value of b in B class : "<<b<<endl;
            }
};

class C : public A, public B
{
    int c;

    public :
            C(int x, int y, int z) : A(x), B(y) 
            {
                c = z;
            }
            void putdata3()
            {
                cout<<"The value of c in C class : "<<c<<endl;
            }
};

int main()
{
    C cc(2,4,6);

    cc.putdata1();
    cc.putdata2();
    cc.putdata3();

    return 0;
}