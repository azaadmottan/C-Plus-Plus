#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the value of a:";                     // here '<<' is insertion operator
    cin>>a;                                            // here '>>' is extraction operator
    
    cout<<"Enter the value of b:";
    cin>>b;

    cout<<"The sum of a and b is "<<a+b;

    return 0;
}