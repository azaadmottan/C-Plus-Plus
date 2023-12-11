#include<iostream>
using namespace std;

// forword declaration
class y;

class x
{
    private : 
            int num1;

    public : 
            void setdata(int a);
            void print_num1();
            friend void swap(x &n1, y &n2);
};

class y
{
    private : 
            int num2;
    
    public :
            void setdata(int b);
            void print_num2();
            friend void swap(x &n1, y &n2);
};

void x :: setdata(int a)
{
    num1 = a;
}

void y :: setdata(int b)
{
    num2 = b;
}

void x :: print_num1()
{
    cout<<num1<<endl;
}

void y :: print_num2()
{
    cout<<num2<<endl;

}

void swap(x &n1 , y &n2)
{
    int t;
    t = n1.num1;
    n1.num1 = n2.num2;
    n2.num2 = t;

}
int main()
{
    x u1;
    u1.setdata(22);
    cout<<"The value of u1 object befor swaping : ";
    u1.print_num1();

    y v1;
    v1.setdata(26);
    cout<<"The value of v2 object before swaping : ";
    v1.print_num2();
    
    swap(u1,v1);

    cout<<"The value of u1 object after swaping : ";
    u1.print_num1();
    cout<<"The value of v1 object after swaping : ";
    v1.print_num2();
}