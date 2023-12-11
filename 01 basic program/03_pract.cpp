#include<iostream>
using namespace std;

int a = 24;                                       // global variable 
void sum()
{
    cout<<a;
}

int main()
{
    int a = 26;                                    // local variable 

    cout<<"The value of a is "<<a;
    cout<<"\n";
    sum();

    return 0;
}