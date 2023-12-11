#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter your rating:";
    cin>>a;

    switch(a)
    {
        case 1: cout<<"Your rating is c++";
        break;
        
        case 2: cout<<"Your rating is B++";
        break;

        case 3: cout<<"Your rating is A++";
        break;

        default: cout<<"Invalid rating !";
    }

    return 0;
}