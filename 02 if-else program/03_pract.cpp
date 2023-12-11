#include<iostream>
using namespace std;

int main()
{
    float percent;

    cout<<"Enter your percentege:";
    cin>>percent;

    if((percent >= 95) && (percent <= 100))
    {
        cout<<"A++";
    }
    else if((percent >= 90) && (percent <= 94))
    {
        cout<<"A+";
    }
    else if((percent >= 85) && (percent <= 89))
    {
        cout<<"A";
    }
    else if((percent >= 80) && (percent <= 84))
    {
        cout<<"B++";
    }
    else if((percent >= 75) && (percent <= 79))
    {
        cout<<"B+";
    }
    else if((percent >= 70) && (percent <= 74))
    {
        cout<<"B";
    }
    else if((percent >= 65) && (percent <= 69))
    {
        cout<<"C++";
    }
    else if((percent >= 60) && (percent <= 64))
    {
        cout<<"C+";
    }
    else if((percent >= 55) && (percent <= 59))
    {
        cout<<"C";
    }
    else if((percent >= 50) && (percent <= 54))
    {
        cout<<"D++";
    }
    else if((percent >= 45) && (percent <= 49))
    {
        cout<<"D+";
    }
    else if((percent >= 40) && (percent <= 44))
    {
        cout<<"D";
    }
    else if((percent >= 35) && (percent <= 39))
    {
        cout<<"E";
    }
    else
    {
        cout<<"Fail";
    }

    return 0;
}