#include<iostream>
using namespace std;

class first
{
    int num1, num2;
    public:
        first(int n, int m)
        {
            num1 = n;
            num2 = m;
        }

        // void operator +()
        // {
        //     num1 = num1 + num2;
        // }

        // void operator -()
        // {
        //     num1 = num1 - num2;
        // }
        
        void operator ++()
        {
            num1++;
        }
        
        void operator --()
        {
            num1--;
        }
        
        void print()
        {
            cout<<"Result: "<<num1<<endl;
        }
};

int main()
{
    first ob(2, 4);

    // +ob;
    // ob.print();

    // -ob;
    // ob.print();

    ++ob;
    ob.print();

    --ob;
    ob.print();

    return 0;
}