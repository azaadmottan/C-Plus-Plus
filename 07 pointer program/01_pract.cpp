#include<iostream>
using namespace std;

int main()
{
    int a = 2;                                                    // & (address of) operator
    int* b = &a;                                                  // * (value at) dereference operator

    cout<<"The address of a is "<<&a<<endl; 
    cout<<"b store the address of a "<<b<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b at address of a is "<<*b;

    return 0;
}