#include<iostream>
using namespace std;

// forword declaration 
class complex;

class calculate
{
    public : 
            int sum(int n1,int n2)
            {
                return (n1 + n2);
            }
            int sum_real(complex, complex);
            int sum_complex(complex, complex);
};

class complex 
{
    private : 
             int a,b;
             friend int calculate :: sum_real(complex , complex);    // friend give permission to class calculate for access data of complex 
             friend int calculate :: sum_complex(complex , complex);

            //  friend class calculate;
    
    public : 
             void setdata(int x1, int x2);
             void printnum();
};

void complex :: setdata(int x1, int x2)
{
    a = x1;
    b = x2;
}

int calculate :: sum_real(complex y1,complex y2)
{
    return (y1.a + y2.a);
}

int calculate :: sum_complex(complex z1,complex z2)
{
    return (z1.b + z2.b);
}

void complex :: printnum()
{
    cout<<"Complex numbers are : "<<a<<" + "<<b<<"i"<<endl;
}
int main()
{
    complex c1,c2;                // c1,c2 are objects

    c1.setdata(2,4);
    c1.printnum();

    c2.setdata(6,8);
    c2.printnum();

    calculate cal1,cal2;

    int result1 = cal1.sum_real(c1,c2);
    
    cout<<"Sum of real part of complex number is : "<<result1<<endl;

    int result2 = cal2.sum_complex(c1,c2);

    cout<<"Sum of complex part of complex number is : "<<result2<<"i"<<endl;

    return 0;
}