#include<iostream>
using namespace std;

class data
{
    protected :
               int a,b;
    public :
            void getdata()
            {
                cout<<"Enter your 10th percentage : ";
                cin>>a;
                cout<<"Enter your 12th percentage : ";
                cin>>b;
            }
            void percent()
            {
                cout<<"\n\nYour 10th percentage : "<<a<<endl;
                cout<<"Your 12th percentage : "<<b<<endl<<endl;
            }
};
class sem1 : virtual public data                                  // virtual base class 
{
    protected :
               int sub1a,sub2a,sub3a,sub4a;
               int total1;
    
    public :
            void marks1()
            {
                cout<<"Enter 1st semester marks"<<endl;
                cout<<"Enter your Physics marks :";
                cin>>sub1a;
                cout<<"Enter your Maths marks :";
                cin>>sub2a;
                cout<<"Enter your BEEE marks :";
                cin>>sub3a;
                cout<<"Enter your EGD marks :";
                cin>>sub4a;

                total1 = (sub1a + sub2a + sub3a + sub4a);
            }
            void putdata1()
            {
                cout<<"1st semester marks"<<endl<<endl;
                cout<<"Physics marks :"<<sub1a<<endl;
                cout<<"Maths marks :"<<sub2a<<endl;
                cout<<"BEEE marks :"<<sub3a<<endl;
                cout<<"EGD marks :"<<sub4a<<endl;
                cout<<"\n1st semester percentage : "<<(total1*100)/400<<endl;
            }
};

class sem2 : virtual public data
{
    protected :
                int sub1b,sub2b,sub3b,sub4b;
                int total2;

    public :
            void marks2()
            {
                cout<<endl<<"Enter 2nd semester marks"<<endl;
                cout<<"Enter your Chemistry marks :";
                cin>>sub1b;
                cout<<"Enter your Maths-2 marks :";
                cin>>sub2b;
                cout<<"Enter your Programming marks :";
                cin>>sub3b;
                cout<<"Enter your English marks :";
                cin>>sub4b;

                total2 = (sub1b + sub2b + sub3b + sub4b);
            }
            void putdata2()
            {
                cout<<"\n\n2nd semester marks"<<endl<<endl;
                cout<<"Chemistry marks :"<<sub1b<<endl;
                cout<<"Maths-2 marks :"<<sub2b<<endl;
                cout<<"Programming marks :"<<sub3b<<endl;
                cout<<"English marks :"<<sub4b<<endl;
                cout<<"\n2nd semester percentsge : "<<(total2*100)/400<<endl;
            }
};

class result : public sem1,public sem2
{
    protected :
               float total;

    public :
            void result1()
            {
                getdata();
                marks1();
                marks2();
                percent();
                putdata1();
                putdata2();
                // getdata();
                // percent();
                total = total1 + total2;
                cout<<"------------------------------------"<<endl;
                cout<<"Total marks in 1st year : "<<total;
            }
};

int main()
{
    result r;
    // r.marks1();
    // r.marks2();
    // r.putdata1();
    // r.putdata2();
    r.result1();

    return 0;
}