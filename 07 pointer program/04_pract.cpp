#include<iostream>
using namespace std;

int main()
{
    int a = 2;
    int* b = &a;
    int** c = &b;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"b store the address of a "<<b<<endl;
    cout<<"value at address of b is  "<<*(&b)<<endl;
    cout<<"value of b is "<<*b<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"c store the address of b "<<c<<endl;
    cout<<"value at address of c is "<<*(&c)<<endl;
    cout<<"value of c is "<<**c<<endl;
    cout<<"The address of c is "<<&c;

    return 0;
}