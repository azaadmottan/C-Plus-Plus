#include<iostream>
using namespace std;

class sum
{
    private : 
            int a,b;
    
    public : 
            void getdata();
            friend int putdata(sum);    //If a function is defined as a friend function
                                        //then the protected and private data of a class can be accessed using the function.
};

void sum :: getdata()
{
    cout<<"Enter two numbers : ";
    cin>>a>>b;
}

int putdata(sum s)
{
    return s.a + s.b;
}

int main()
{
    sum s;

    s.getdata();


    cout<<"sum of two numbers is "<<putdata(s);

    return 0;
}