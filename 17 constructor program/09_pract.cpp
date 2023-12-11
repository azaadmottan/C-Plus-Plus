#include<iostream>
using namespace std;

class one 
{
    public:
        one()                                   // default constructure can be invoked automatically
        {
            cout<<"class one\n";
        }
};

class two 
{
    public:
        two()                                   // default constructure can be invoked automatically
        {
            cout<<"class two\n";
        }
};

class three : public one, public two
{
    public:
        three()                                 // default constructure can be invoked automatically
        {
            cout<<"class three\n";
        }
};

int main()
{
    three obj;

    return 0;
}