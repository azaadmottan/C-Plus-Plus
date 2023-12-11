#include<iostream>
using namespace std;

class base
{
    private :
            int a,b;
    
    public :
            base(int i, int j) : a(i), b(i + j)              // constructure initilization
            {
                cout<<"The value of a : "<<a<<endl;
                cout<<"The value of b : "<<b;
            }
};

int main()
{
    base b(4 ,6);

    return 0;
}
