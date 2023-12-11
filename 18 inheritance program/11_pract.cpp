#include<iostream>
using namespace std;

class base
{
    protected : int p,q,r;
    public : 
        base(int x, int y)
        {
            p = x;
            q = y;
        }

};

class derive1 : public base
{
    int r;
    public : 
        derive1(int x, int y, int z) : base(x, y)
        {
            r = z;
        }

        void display1()
        {
            cout<<"Result (1): "<<p * q * r;
        }
};

class derive2 : public base
{
    int r;
    public : 
        derive2(int x, int y, int z) : base(x, y)
        {
            r = z;
        }

        void display2()
        {
            cout<<"\nResult (2): "<<p * q * r;
        }
};

int main()
{
    derive1 obj1(2,4,6);
    obj1.display1();

    derive2 obj2(1,3,5);
    obj2.display2();

    return 0;
}