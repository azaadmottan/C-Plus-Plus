#include<iostream>
using namespace std;

class A
{
    int a;
    public :  
        A(int m)
        {
            a = m;
        }
        void display()
        {
            cout<<"The value of a: "<<a;
        }
        ~A()                                                    // Destructure
        {
            cout<<"\nFree allocated memory of class A!";
        }
};

class B
{
    int b; 
    public :
        B(int n)
        {
            b = n;
        }
        void display()
        {
            cout<<"\nThe value of b: "<<b;
        }
        ~B()
        {
            cout<<"\nFree allocated memory of class B!";
        }
};

int main()
{
    B ob2(4);
    A ob1(2);
    ob1.display();
    ob2.display();


    return 0;
}