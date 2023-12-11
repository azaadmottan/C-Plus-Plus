#include<iostream>
using namespace std;

class one 
{
    int x;
    public:
        one(int a, int b)
        {
            cout<<"\nValue of a : "<<a;
            cout<<"\nValue of b : "<<b;

            // cout<<"Enter the value of x: ";
            // cin>>x;
            // cout<<"\nResult: "<<x*x<<endl;
        }
};

int main()
{
    one obj[2] = {{10, 20},{30, 40}};

    // for (int i = 0; i < 1; i++)
    // {
        // obj[2];
    // }
    
    return 0;
}