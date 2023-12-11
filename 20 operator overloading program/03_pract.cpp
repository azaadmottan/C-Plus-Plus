#include<iostream>
using namespace std;

class first 
{
    int num1, num2;
    public : 
        first(int m, int n)
        {
            num1 = m;
            num2 = n;
        }

        first(){}

        first operator *(first obj)
        {
            first obj1;

            obj1.num1 = num1 * obj.num1;
            obj1.num2 = num2 * obj.num2;

            return obj1;
        }

        first operator /(first obj)
        {
            first obj1;

            obj1.num1 = num1 / obj.num1;
            obj1.num2 = num2 / obj.num2;

            return obj1;
        }

        first operator %(first obj)
        {
            first obj1;

            obj1.num1 = num1 % obj.num1;
            obj1.num2 = num2 % obj.num2;

            return obj1;
        }

        void display()
        {
            cout<<"The value of num1 : "<<num1<<" and the value of num2: "<<num2<<endl;
        }
};

int main()
{
    first obj1(6, 8), obj2(2, 4), obj3, obj4, obj5;

    obj3 = obj1 * obj2;
    obj4 = obj1 / obj2;
    obj5 = obj1 % obj2;

    obj3.display();
    obj4.display();
    obj5.display();

    return 0;
}