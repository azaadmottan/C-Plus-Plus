#include<iostream>
using namespace std;

class base
{
    public :
        virtual int add(int x, int y)
        {
            return x + y;
        }
        virtual void override()
        {
            cout<<"Base class function"<<endl;
        }
};

class derive : public base
{
    public :
        int add(int x, int y)
        {
            return x - y;
        }
        void override()
        {
            cout<<"Derive class function"<<endl;
        }
};

int main()
{
    base *ptr;
    derive obj;

    ptr = &obj;
    ptr->override();
    // obj.override();

    cout<<"Result: "<<obj.add(2,4);

    return 0;
}