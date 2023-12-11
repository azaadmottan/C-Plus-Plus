#include<iostream>
#include<math.h>
using namespace std;

class pointB;         // forward declaration
class pointA
{
    private :
            int a,b;

    public :
            void getdata();
            void putdata();
            friend void distance(pointA, pointB);
};

class pointB
{
    private :
            int a,b;

    public :
            void getdata();
            void putdata();
            friend void distance(pointA, pointB);
};

void pointA :: getdata()
{
    cout<<"Enter the coordinate of point A : ";
    cin>>a>>b;
}

void pointB :: getdata()
{
    cout<<"Enter the coordinate of point B : ";
    cin>>a>>b;
}

void distance(pointA x, pointB y)
{
    cout<<"The distance between point A("<<x.a<<", "<<x.b<<") and point B("<<y.a<<", "<<y.b<<") is "<<sqrt(pow((y.a - x.a),2) + pow((y.b - x.b),2))<<" square units";
}
// eg. pt A(1,2) and pt B(1,5) is 3 and pt A(1,2) and pt B(1,6) is 4
int main()
{
    pointA a;
    a.getdata();

    pointB b;
    b.getdata();

    distance(a,b);

    return 0;
}