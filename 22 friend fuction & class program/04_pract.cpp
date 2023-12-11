#include<iostream>
using namespace std;

class second;      // forward declaration
class first
{
    private :
            int a;

    public : 
            void getdata();
            friend void max(first, second);
};

class second 
{
    private : 
            int b;

    public :
            void getdata();
            friend void max(first, second);
};

void first :: getdata()
{
    cout<<"Enter the value of a : ";
    cin>>a;
}

void second :: getdata()
{
    cout<<"Enter the value of b : ";
    cin>>b;
}

void max(first f, second s)
{
    if(f.a > s.b)
    {
        cout<<f.a<<" is greater than "<<s.b<<" or ("<<f.a<<" > "<<s.b<<")";
    }
    else if(f.a < s.b) 
    {
        cout<<s.b<<" is greater than "<<f.a<<" or ("<<s.b<<" > "<<f.a<<")";
    }
    else 
    {
        cout<<s.b<<" is equal to "<<f.a<<" or ("<<s.b<<" == "<<f.a<<")";
    }
}

int main()
{
    first f;
    f.getdata();

    second s;
    s.getdata();
    
    max(f,s);

    return 0;
}