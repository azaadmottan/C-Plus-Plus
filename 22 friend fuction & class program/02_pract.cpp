#include<iostream>
using namespace std;

class Y;                        // forword declaration

class X
{
    private : 
            int num1;

    public : 
            void setdata(int a);
            void print1();
            friend void add(X,Y);
};

class Y
{
    private : 
            int num2;

    public : 
            void setdata(int b);
            void print2();
            friend void add(X,Y);
};

void X :: setdata(int a)
{
    num1 = a;
}

void Y :: setdata(int b)
{
    num2 = b;
}

void X :: print1()
{
    cout<<"The value of x1 object is : "<<num1<<endl;
}

void Y :: print2()
{
    cout<<"The value of y1 object is : "<<num2<<endl;
}

void add(X n1,Y n2)
{
    cout<<"Sum of X and Y object is : "<<n1.num1 + n2.num2;
}

int main()
{
    X x1;
    x1.setdata(2);
    x1.print1();

    Y y1;
    y1.setdata(4);
    y1.print2();

    add(x1,y1);
        
    return 0;
}