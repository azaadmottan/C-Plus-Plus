#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    cout<<"Range of short int(min): "<<SHRT_MIN;
    cout<<"\nRange of short int (max): "<<SHRT_MAX;
    cout<<"\nSizeof short(int): "<<sizeof(int);

    cout<<"\n\nRange of int(min): "<<INT_MIN;
    cout<<"\nRange of int(max): "<<INT_MAX;
    cout<<"\nSizeof int(max): "<<sizeof(INT_MAX);

    cout<<"\n\nRange of long int(min): "<<LONG_MIN;
    cout<<"\nRange of long int(max): "<<LONG_MAX;
    cout<<"\nSizeof long (int): "<<sizeof(LONG_MAX);

    cout<<"\n\nRange of long long int(min): "<< LLONG_MIN;
    cout<<"\nRange of long long int(max): "<<LLONG_MAX;
    cout<<"\nSizeof long long (int): "<<sizeof(LLONG_MAX);


    return 0;
}