#include<iostream>
using namespace std;

int glob = 8;

int main()
{
    int a = 6;

    cout<<"The value of a is "<<a<<endl;

    cout<<"The value of glob is "<<::glob;          // here '::' is scope resolution use for read the value of global variable

    float b = 4.3;

    cout<<"Size of (4.3) is "<<sizeof(4.3)<<endl;
    cout<<"Size of (4.3f) is "<<sizeof(4.3f)<<endl;
    cout<<"Size of (4.3l) is "<<sizeof(4.3l)<<endl;
    cout<<"Size of (4.3F) is "<<sizeof(4.3F)<<endl;
    cout<<"Size of (4.3L) is "<<sizeof(4.3L)<<endl;

    return 0;
}