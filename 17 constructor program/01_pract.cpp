#include<iostream>
using namespace std;

class x
{
    private : 
            int a,b;

    public :
            x()             // constructure define only in public part  
            {               // default constructure is a type of constructure whose name is similar to class name 
                a = 10;     // which is automatically invoked (means 'call')
                b = 20;
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
    x aa;

    aa.putdata();

    return 0;
}