#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout<<"The value of a : "<<a<<endl;
    cout<<"The value at ptr : "<<*ptr<<endl;

    int *b = new int(20);
    int *arr = new int[2];
    arr[0] = 10;
    arr[1] = 20;
    
    cout<<"The value of b : "<<*b<<endl;
    cout<<"The value of arr[0] : "<<arr[0]<<endl;
    cout<<"The value of arr[1] : "<<arr[1]<<endl;
    
    return 0;
}