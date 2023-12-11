#include<iostream>
using namespace std;

void swap(int* a,int* b);
void swaprefer(int &a,int &b);
int main()
{
    int a = 2,b = 4;

    cout<<"The value of a and b before swaping is "<<a<<" and "<<b<<endl;
    swap(&a,&b);                                                   // call by reference
    cout<<"The value of a and b after swaping is "<<a<<" and "<<b<<endl;
    
    cout<<"The value of a and b before swaping is "<<a<<" and "<<b<<endl;
    swaprefer(a,b);                                                  // call by refernece using reference variable 
    cout<<"The value of a and b after swaping is "<<a<<" and "<<b<<endl;

    return 0;
}

void swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swaprefer(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}