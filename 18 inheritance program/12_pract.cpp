#include<iostream>
using namespace std;

class base 
{
    protected :
        int num;
    public :
        void getnum()
        {
            cout<<"\nEnter an integer: ";
            cin>>num;
        }
};

class square : public base
{
    public : 
        int sqr()
        {
            return num * num;
        }
};

class cube : public base
{
    public :
        int cub()
        {
            return num * num * num;
        }
};

int main()
{
    square obj1;
    cube obj2;

    obj1.getnum();
    obj1.sqr();

    cout<<"Square: "<<obj1.sqr();

    obj2.getnum();
    obj2.cub();
    
    cout<<"Cube: "<<obj2.cub();

    return 0;
}