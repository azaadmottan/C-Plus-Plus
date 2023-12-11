#include<iostream>
using namespace std;

class complex 
{                       
    int a;                           
    int b;

    public : 
            void setdata(int x,int y)
            {
                a = x;
                b = y;
            }

            void setdata_sum(complex v1,complex v2)
            {
                a = v1.a + v2.a;
                b = v1.b + v2.b;   
            }
            void print_sum()
            {
                cout<<"---------------------------------"<<endl;
                cout<<"Sum of complex number is : "<<a<<" + i"<<b;
            }

            void print(int x1,int x2)
            {
                cout<<"complex number are       : "<<x1<<" + i"<<x2<<endl;
            }
};

int main()
{
    complex c1,c2,c3;

    c1.setdata(1,2);
    c1.print(1,2);

    c2.setdata(3,4);
    c2.print(3,4);

    c3.setdata_sum(c1,c2);
    c3.print_sum();

    return 0;
}