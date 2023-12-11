#include<iostream>
using namespace std;

int fib(int n);

int main()
{
    int range;

    cout<<"Enter the range of Fibonacci series: ";
    cin>>range;

    // fib(range);

    cout<<"The sequence of Fibonacci series is: ";
    for (int i = 0; i < range; i++)
    {
        cout<<fib(i)<<" ";
    }
    
    return 0;
}

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}