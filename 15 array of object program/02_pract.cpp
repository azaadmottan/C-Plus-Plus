#include<iostream>
using namespace std;

class employee
{
    int id;                     
    int salary = 20000;

    public : void setid(void);
             void getid(void); 
};

void employee :: setid(void)
{
    cout<<"Enter your id : ";
    cin>>id;
}

void employee :: getid(void)
{
    cout<<"Your id is "<<id<<endl;
    cout<<"Your salary is "<<salary<<endl;
}

int main()
{
    employee f[4];

    for(int i = 0; i < 4; i++)
    {
        f[i].setid();
        f[i].getid();
    }

    return 0;
}