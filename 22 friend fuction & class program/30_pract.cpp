#include<iostream>
using namespace std;

class one 
{
    int a;

    public :
        void input(int x)
        {
            a = x;
        }
        friend void output();                // Friend function
};

class two 
{
    int b;

    public :
        void input(int y)
        {
            b = y;
        }
        friend void output();
};

void output()
{
    one obj1;
    two obj2;

    obj1.input(2);
    obj2.input(4);
    
    cout<<"Result: "<<(obj1.a * obj2.b);
}
int main()
{
    // one obj1;
    // two obj2;
    // obj1.input(2);
    // obj2.input(4);

    output();

    return 0;
}