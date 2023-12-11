#include<iostream>
using namespace std;

class one
{
    int a;
    public :
        one(int m)
        {
            a = m;
        }
        friend class two;                      // Friend class
};

class two
{
    int b;
    public : 
        two(int n)
        {
            b = n;
        }
        void display(one &ob1)
        {
            cout<<"Result: "<<ob1.a*b;
        }

};

int main()
{
    one ob(4);
    two ob2(5);

    ob2.display(ob);

    return 0;
}