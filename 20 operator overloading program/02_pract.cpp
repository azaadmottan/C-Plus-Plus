#include<iostream>
using namespace std;

class base
{
    double length,breadth,height;
    public :
        base(double x, double y, double z)
        {
            length = x;
            breadth = y;
            height = z;
        }

        base()
        {
            //default constructure
        }

        base operator +(base b)
        {
            base bb;
            bb.length = length + b.length;
            bb.breadth = breadth + b.breadth;
            bb.height = height + b.height;

            return bb; 
        }

        double volume()
        {
            return length * breadth * height;            
        }
};

int main()
{
    base obj1(2,4,6),obj2(1,3,5),obj3;

    cout<<"The volume of first box : "<<obj1.volume()<<endl;
    cout<<"The volume of second box : "<<obj2.volume()<<endl;

    obj3 = obj1 +(obj2);

    cout<<"The volume of two box : "<<obj3.volume();

    return 0;
}