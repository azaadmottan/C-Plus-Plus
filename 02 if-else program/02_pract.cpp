#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if((age > 18) && (age < 80))
    {
        cout<<"you can drive";
    }
    else
    {
        cout<<"you cannot drive";
    }

    return 0;
}