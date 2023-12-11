#include<iostream>
using namespace std;

class complex 
{
    protected :
               int real,complex;

    public :
            void getdata(int a, int b)
            {
                real = a;
                complex = b;
            }
            void putdata()
            {
                cout<<"The complex equation is "<<real<<" + "<<" i"<<complex;
            }
};

int main()
{
    // complex c;
    // complex *ptr = &c;
    
    // ptr->getdata(22,44);
    // ptr->putdata();

    complex *ptr1 = new complex;

    ptr1->getdata(22,44);
    ptr1->putdata();

    return 0;
}