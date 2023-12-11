#include<iostream>
using namespace std;

int factorial(int fact);
int main()
{
    int a,b;

    cout<<"Enter any positive integer :";
    cin>>a;
    b = factorial(a);
    cout<<"Factorial of "<<a<<" is "<<b;

    return 0;
}

int factorial(int fact)
{
    // if(fact == 0 || fact == 1)
    if(fact <= 1)
    {
        return 1;
    }
    else
    {
        return (fact * factorial(fact-1));                        // n! = n * (n-1)!
    }
}