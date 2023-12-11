#include<iostream>
using namespace std;

class employee 
{
    private :
            int a,b,c;

    public : 
            int d,e;
            void setdata(int a1, int b1, int c1);           // function prototype in class
            void getdata(int d1, int e1); 
};

void employee :: setdata(int a1, int b1, int c1)            // function decalaration 
{
    a = a1;
    b = b1;
    c = c1;
}

void employee :: getdata(int d1, int e1)                    // function decalaration
{
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d1<<endl;
    cout<<"The value os e is "<<e1<<endl;
}

int main()
{
    employee Rohit;                                 // here employee is class and Rohit is object  

    Rohit.setdata(24,26,28);
    // Rohit.a = 22;                         
    // Rohit.b = 22;                                // here a, b, c are private (can't pass the value of a, b, c)
    // Rohit.c = 22;


    Rohit.getdata(30,32);
    // Rohit.d = 20;
    // Rohit.e = 22;                                // here d, e are public 
    // Rohit.getdata(Rohit.d = 20,Rohit.e = 22);
    

    return 0;
}