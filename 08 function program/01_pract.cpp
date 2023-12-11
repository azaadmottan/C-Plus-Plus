#include<iostream>
using namespace std;

int sum(int x, int y);
int main()
{
    int a,b;

    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;

    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum(a,b);           // call by value (here a and b are actual paramters)

    return 0;
}

int sum(int x, int y)                                           // here x and y are formal parameters 
{
    return (x+y);
}