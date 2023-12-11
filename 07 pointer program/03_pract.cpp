#include<iostream>
using namespace std;

void swap(int* x,int* y);
int main()
{
    int a = 2,b = 4;

    cout<<"The value of a and b before swaping is "<<a<<" and "<<b<<endl;

    swap(&a,&b);                                                        // call by reference

    cout<<"The value of a and b after swaping is "<<a<<" and "<<b;

    return 0;
}

void swap(int* x,int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;
}