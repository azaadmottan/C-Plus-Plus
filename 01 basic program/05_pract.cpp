#include<iostream>
using namespace std;

int main()
{
    int a=4,b=8;
       
    cout<<"simple arithmetic operator\n"<<endl;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    cout<<"\ncomparison operator\n"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a =! b is "<<(a=!b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;

    cout<<"\nlogical operator\n"<<endl;
    cout<<"The value of ((a > b) && (a < b)) is "<<((a > b) && (a < b))<<endl;
    cout<<"The value of ((a == b) || (a < b)) is "<<((a == b) || (a < b))<<endl;
    cout<<"The value of (!(a == b)) is "<<(!(a == b))<<endl;
    
    return 0;  
}