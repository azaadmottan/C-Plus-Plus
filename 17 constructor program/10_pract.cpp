#include<iostream>
using namespace std;

class one 
{
    protected:
            int x;
            one(int a)                              // Parameterized constructure
            {
                x = a;
            }
};

class two 
{
    protected:
            int y;
            two(int b)                              // Parameterized constructure
            {
                y = b;
            }
};

class three : public one, public two
{
    int z;
    public:
        three(int m, int n, int o) : one(m), two(n){z = o;}      
        void add()
        {
            cout<<"Addition of "<<x<<" and "<<z<<": "<<x+z;
        }

        void mult()
        {
            cout<<"\nMultiplication of "<<x<<" and "<<z<<": "<<x*z;
        }
};

int main()
{
    three obj(2,4,6);

    obj.add();
    obj.mult();
    
    return 0;
}