#include<iostream>
using namespace std;

float volume(int r,int h)
{
    return 3.14 * r * r * h;
}

float volume(int a)    // when function can have same name but have different number of parameter-list then function is called overloded function(polymorphism)
{
    return a * a * a;
}

float volume(int l,int b,int h)
{
    return l * b * h;
}

int main()
{
    cout<<"The volume of cuboid is "<<volume(3,6)<<endl;        

    cout<<"The volume of cube is "<<volume(6)<<endl;

    cout<<"The volume of rectangular box is "<<volume(2, 4, 6)<<endl;

    return 0;
}