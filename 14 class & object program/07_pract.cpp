#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class binary 
{
    private : 
            string s;

    public :
            void read(void);
            void check_bin(void);
            void compliment(void);
            void print(void);
};

void binary :: read(void)
{
    cout<<"Enter binary number : ";
    cin>>s;
}

void binary :: check_bin(void)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect binary format !";
            exit(0);
        }
    }
}

void binary :: compliment(void)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: print(void)
{
    cout<<"Compliment of the binary number: ";   
    for(int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}

int main()
{
    binary b;

    b.read();
    b.check_bin();
    
    b.compliment();
    b.print();

    return 0;
}