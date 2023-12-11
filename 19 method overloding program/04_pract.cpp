#include<iostream>
using namespace std;

class complex 
{
    private : 
            int a,b;

    public : 
            complex();
            complex(int x, int y);         // constructure overloding
            complex(int x);

            void putdata();
};

complex :: complex()                      // default constructure 
{
    a = 2;
    b = 4;
}

complex :: complex(int x, int y)         // parameterized construcutre
{
    a = x;
    b = y;
}

complex :: complex(int x)               // default and parameterized constructure
{
    a = x;
    b = 0;
}

void complex :: putdata()
{
    cout<<"complex numbers are : "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
    complex c1;
    c1.putdata();
    
    complex c2(4,6);
    c2.putdata();

    complex c3(8);
    c3.putdata();

    return 0;
}