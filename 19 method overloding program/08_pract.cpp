#include<iostream>
using namespace std;

class A
{
    int a,b;
    public : 
        A(int x, int y)
        {
            a = x; 
            b = y;
        }
        A(A &ob, A &ob1)                                   // Copy constructure
        {
            cout<<"The multiplication of "<<ob.a<<" * "<<ob.b<<" is "<<ob.a*ob.b<<endl;
            cout<<"The sum of "<<ob1.a<<" + "<<ob1.b<<" is "<<ob1.a + ob.b;
        }
        // A(A &ob)
        // {
        //     cout<<"The sum of "<<ob.a<<" * "<<ob.b<<" is "<<ob.a + ob.b;
        // }
};

int main()
{
    A ob(4,8);

    A ob1(ob, ob);

    // A ob2(ob);

    return 0;
}