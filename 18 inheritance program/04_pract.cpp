#include<iostream>
using namespace std;

class A
{
    private :
            int roll;

    public :
            void getdata1()
            {
                cout<<"Enter your roll number : ";
                cin>>roll;
            }
};

class B : public A
{
    protected :
            int sub1,sub2,sub3,sub4,sub5;

    public :
            void getdata2()
            {
                cout<<"Enter marks of physics : ";
                cin>>sub1;
                cout<<"Enter marks of chemistry : ";
                cin>>sub2;
                cout<<"Enter marks of maths : ";
                cin>>sub3;
                cout<<"Enter marks of english : ";
                cin>>sub4;
                cout<<"Enter marks of beee : ";
                cin>>sub5;
            }
};

class C : public B                                // multilevel inheritance
{
    public :
            void putdata()
            {
                // cout<<"\nYour roll number is "<<roll<<endl;
                cout<<"Your total marks is "<<sub1+sub2+sub3+sub4+sub5;
            }
};

int main()
{
    C aa;

    aa.getdata1();
    aa.getdata2();
    aa.putdata();

    return 0;
}