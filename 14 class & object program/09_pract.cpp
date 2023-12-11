#include<iostream>
using namespace std;

class employee 
{
    private : int id;
              static int count; 
    // When a static data member is created, there is only a single copy of the data member 
    // which is shared between all the objects of the class.
    public : void setdata(void);
             void getdata(void);

};

int employee :: count;                              // by default the static value of i is 0

void employee :: setdata(void)
{
    cout<<"Enter id of "<<count + 1<<" employee : ";
    cin>>id;
    count++;
}

void employee :: getdata(void)
{
    cout<<"Id of "<<count<<" employee is "<<id<<endl;
}
int main()
{
    employee sachin,rohit,harry;

    sachin.setdata();
    rohit.setdata();
    harry.setdata();

    sachin.getdata();
    rohit.getdata();
    harry.getdata();

    return 0;
}