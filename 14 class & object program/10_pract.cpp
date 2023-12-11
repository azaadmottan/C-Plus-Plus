#include<iostream>
using namespace std;

class complex
{
    private : 
            int real,imaginary;

    public :
            void getdata(int a, int b)
            {
                this -> real = a;             // "this" is a keyword which is a pointer which points to an object 
                this -> imaginary = b;        // which invoke the mamber function
            }
            void putdata()
            {
                cout<<"The complex equation is "<<real<<" + "<<"i"<<imaginary;
            }
};

int main()
{
    complex c;

    c.getdata(2,4);
    c.putdata();

    return 0;
}