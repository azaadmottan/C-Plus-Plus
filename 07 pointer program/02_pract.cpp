#include<iostream>
using namespace std;

int sum(int x,int y);
int main()
{
    int a = 2,b = 4;

    cout<<"sum of "<<a<<" and "<<b<<" is "<<sum(a,b);     // call by value 
}

int sum(int x,int y)
{
    return x+y;
}