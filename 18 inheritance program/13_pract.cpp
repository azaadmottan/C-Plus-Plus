#include<iostream>
using namespace std;

class base 
{
    protected :
        int num;
    public :
        void input(int n)
        {
            num = n;
        }
        void display()
        {
            cout<<"The value of num: "<<num;
        }
};

class derive : public base
{
    int num2;
    public :
        void input2(int n)
        {
            num2 = n;
        }
        void display2()
        {
            cout<<"\nThe value of num2: "<<num2;
        }

};

int main()
{
    base obj1;
    derive obj;

    obj.input(2);
    obj.display();
    obj.input2(4);
    obj.display2();


    return 0;
}