#include<iostream>
using namespace std;

class one 
{
    int a;

    public :
        one(int x)
        {
            a = x;
        }
        friend void output();
};

class two 
{
    int b;

    public :
        two(int y)
        {
            b = y;
        }
        friend void output();
};

void output()
{
    one obj1(6);
    two obj2(5);
    
    cout<<"Result: "<<(obj1.a * obj2.b);
}
int main()
{
    // one obj1(2,4);
    // two obj2(6,8);

    output();

    return 0;
}