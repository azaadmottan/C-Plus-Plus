#include<iostream>
using namespace std;

class B;               // forward declaration
class A
{
    int a;
    public :
        void input(int m)
        {
            a = m;
        } 
        friend void display(A &ob1, B &ob2);
};

class B : public A                                   // Single inheritance
{
    int b;
    public : 
        void input1(int n)
        {
            b = n;
        }
        friend void display(A &ob1, B &ob2);
};

void display(A &ob1, B &ob2)       
{
    cout<<"The multiplication of "<<ob1.a<<" * "<<ob2.b<<" is "<<ob1.a*ob2.b<<endl;
    cout<<"The multiplication of "<<ob1.a<<" * "<<ob2.b<<" is "<<ob1.a*ob2.b;
}        

int main()
{
    B ob1,ob2;

    ob1.input(2);
    ob2.input1(4);

    display(ob1, ob2);

    return 0;
}