#include<iostream>
#include<math.h>
using namespace std;

class pointB;         // forward declaration
class pointA
{
    private :
            int a,b;

    public :
            void getdata(int x, int y);               // using parameterized constructure 
            friend void distance(pointA, pointB);
};

class pointB
{
    private :
            int a,b;

    public : 
            void getdata(int x ,int y);                // using parameterized constructure 
            friend void distance(pointA, pointB);
};

void pointA :: getdata(int x, int y)
{
    a = x;
    b = y;
}

void pointB :: getdata(int x ,int y)
{
    a = x;
    b = y;
}

void distance(pointA x, pointB y)
{
    cout<<"The distance between point A("<<x.a<<", "<<x.b<<") and point B("<<y.a<<", "<<y.b<<") is "<<sqrt(pow((y.a - x.a),2) + pow((y.b - x.b),2))<<" square units";
}
// eg. pt A(1,2) and pt B(1,5) is 3 and pt A(1,2) and pt B(1,6) is 4
int main()
{
    int x1,x2;
    cout<<"Enter the coordinate of point A : ";
    cin>>x1>>x2;

    pointA a;
    a.getdata(x1,x2);

    int y1,y2;
    cout<<"Enter the coordinate of point B : ";
    cin>>y1>>y2;

    pointB b;
    b.getdata(y1,y2);

    distance(a,b);

    return 0;
}