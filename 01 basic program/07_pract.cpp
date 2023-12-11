#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int &b = a;                            // here we use '&' for referencing (store the value of another variable)

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

    float c = 2.4;

    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of c is "<<int(c)<<endl;       // here we use int(c) or (int)c for typecasting
    cout<<"The value of c is "<<(int)c<<endl;
    int d = int(c);
    cout<<"The value of d is "<<d;

    return 0;
}