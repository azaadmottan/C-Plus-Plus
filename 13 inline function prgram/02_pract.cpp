#include<iostream>
using namespace std;

int money(int current,float factor=1.4)
{
    return current * factor;
}

int main()
{
    int salary = 1000000;

    cout<<"If you have "<<salary<<" RS in your bank account, you have recived "<<money(salary)<<" after 2 years."<<endl;
    cout<<"For VIP: If you have "<<salary<<" RS in your bank account, you have recived "<<money(salary,2.4)<<" after 2 years."<<endl;

    return 0;
}
