#include<iostream>
using namespace std;

class number 
{
    private :
            int a,b;

    public :
            number()                        // when we use copy constructure the default constructure is mandatory
            {
                a = 10;
            }
            number(number &x)               // copy constructure
            {
                a = x.a;
            }
            void putdata();
};

void number :: putdata()
{
    cout<<"The value of a is "<<a<<endl;
}

int main()
{
    number n1;

    // number n2 = n1;           // number n2(n1);    both are same
    number n2(n1);
    n1.putdata();
    n2.putdata();

    return 0;
}