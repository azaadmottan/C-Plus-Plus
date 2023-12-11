#include<iostream>
using namespace std;

class complex
{
    private : 
            int real,imaginary;

    public :
            void getdata(int a, int b)
            {
                real = a;
                imaginary = b;
            }
            void putdata()
            {
                cout<<"The complex equation is "<<real<<" + "<<"i"<<imaginary;
            }
};

int main()
{
    complex c1;
    complex *ptr = &c1;
    
    (*ptr).getdata(2,4);               // pointer dereferencing 
    ptr->putdata();                    // pointer arrow operator

    return 0;
}