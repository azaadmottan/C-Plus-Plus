#include<iostream>
using namespace std;

class first
{
    public : 
        int add(int x, int y)                           // function overloading
        {
            return x + y;
        }

        int add(int x, int y, int z)                    // function overloading
        {
            return x + y + z;
        }
};

int main()
{
    first obj;

    cout<<"Result: "<<obj.add(2, 4);
    cout<<"\nResult: "<<obj.add(2, 4, 6);

    return 0;
}