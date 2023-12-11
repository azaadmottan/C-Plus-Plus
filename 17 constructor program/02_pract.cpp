#include<iostream>
using namespace std;

class x
{
    private : 
            int a,b;

    public :
            x(int x,int y) // constructure define only in public part  
            {              // parameterized constructure is a type of constructure whose name is similar to class name 
                a = x;     // which is automatically invoked (means 'call')
                b = y;
            }

            void putdata();

};

// x :: x()                      // we can also define constructure outside the class
// {
//     a = 10;
//     b = 20;
// }

void x :: putdata()
{
    cout<<"The value of a is "<<a<<" \nThe value of b is "<<b;
}

int main()
{
    int m,n;

    cout<<"Enter two number : ";
    cin>>m>>n;
    
    x aa(m,n);               // parameterized constructure

    aa.putdata();

    return 0;
}