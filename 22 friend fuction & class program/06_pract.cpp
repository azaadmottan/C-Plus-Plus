#include<iostream>
using namespace std;

class complex 
{
    private : 
            int a,b;
    
    public : 
            void setdata(int n1,int n2);
            void print_num();
            friend complex sum(complex x1, complex x2);
            void print_sum();
};

void complex :: setdata(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex :: print_num()
{
    cout<<"Complex numbers are      : "<<a<<" + "<<b<<"i"<<endl;
}

complex sum(complex x1,complex x2)
{ 
    complex x3;
    x3.setdata((x1.a + x2.a), (x1.b + x2.b));
    return x3;
}
void complex :: print_sum()
{
    cout<<"----------------------------------"<<endl;
    cout<<"Sum of complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
    complex c1,c2,c3;                 // here c1,c2,c3 are object of class

    c1.setdata(2,4);
    c1.print_num();

    c2.setdata(6,8);
    c2.print_num();
    
    c3 = sum(c1,c2);
    c3.print_sum();
    
    return 0;
}