#include<iostream>
using namespace std;

class A
{
    int a,b,c;

    public : 
        A(int x, int y)                             // Constructure overloading
        {
            a = x;
            b = y;
        }
        A(int x, int y, int z)                      // Constructure overloading
        {
            a = x;
            b = y;
            c = z;
        }
        void output()
        {
           cout<<"Result: "<<(a*b)<<endl; 
        }
        void output2()
        {
            cout<<"Result: "<<(a*b*c);
        }
};

int main()
{
    A obj1(2,4),obj2(2,3,4);
    obj1.output();
    obj2.output2();

    return 0;
}