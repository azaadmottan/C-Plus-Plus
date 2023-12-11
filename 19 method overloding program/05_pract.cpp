#include<iostream>
using namespace std;

class bank
{
    private : 
            int principle;
            int years; 
            float interest;
            int interestedmoney;

    public :
            bank(int p, int y, int r);
            bank(int p, int y, float r);
            void putdata();
};

bank :: bank(int p, int y, int r)
{
    principle = p;
    years = y;
    interest = float(r)/100;
    cout<<interest;
    interestedmoney = p;
    for(int i = 0; i < y; i++)
    {
        interestedmoney = interestedmoney * (1+interest);
    }
}
    
void bank :: putdata()
{
    cout<<"Your amount : "<<principle<<endl<<"After "<<years<<" years with "<<interest<<"% interest rate,"
        <<"You will get "<<interestedmoney<<" rupees.";
}

int main()
{
    int p,n;
    int r;

    cout<<"Enter amount : ";
    cin>>p;

    cout<<"Enter time : ";
    cin>>n;

    cout<<"Enter interest rate : ";
    cin>>r;

    bank b(p,n,r);
    b.putdata();

    return 0;
}