#include<iostream>
using namespace std;

int main()
{
    const int a = 8;
    // a = 4;                          // 'a' can't be change because it is a constat variable

    cout<<"The value of a is "<<a<<endl;
    
    int b = 4,c = 2,d;
    d = a * b + b / 2 - c;             // operator precedence left to right associativity

    cout<<"The value of d is "<<d;

    return 0;
}