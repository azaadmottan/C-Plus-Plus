#include<iostream>
using namespace std;

inline int product(int a,int b);       // here we use inline function for simple calculation

int main()
{
    int a, b;

    cout<<"Enter the value of a and b : ";
    cin>>a>>b;

    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    return 0;
}

int product(int a, int b)
{
    return a*b;
}