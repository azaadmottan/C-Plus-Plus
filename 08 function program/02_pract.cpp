#include<iostream>
#include<math.h>
using namespace std;

float square(float x);
float root(float y);
int main()
{
    float a,b;

    cout<<"Enter any number to find square ";
    cin>>a;
    cout<<"Square of "<<a<<" is "<<square(a)<<endl;

    cout<<"Enter any number to find root ";
    cin>>b;
    cout<<"Root of "<<b<<" is "<<root(b)<<endl;

    return 0;
}

float square(float x)
{
    return pow(x,2);
}
float root(float y)
{
    return sqrt(y);
}