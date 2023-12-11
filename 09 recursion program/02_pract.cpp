#include<iostream>
using namespace std;

int fib(int a);
int main()
{
    int a;
    
    cout<<"Enter range of fibonachi series :";
    cin>>a;

    cout<<"Fibonachi series is : ";
    
    for(int i = 0; i < a; i++)
    {
        cout<<fib(i)<<" ";
    }

    return 0;
}

int fib(int a)
{
    if(a == 0)
    {
        return 0;
    }
    else if(a == 1)
    {
        return 1;
    }
    else
    {
        return (fib(a-1)+fib(a-2));
    }
}