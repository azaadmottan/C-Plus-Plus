#include<iostream>
#include<string>
using namespace std;

int main()
{
    string c;
    
    cout<<"Enter in which account you sign in:";
    cin>>c;

    if(c=="google")
    {
        cout<<"click on this link: https://accounts.google.com";
    }
    else if(c=="instagram")
    {
        cout<<"click on this link: https://www.instagram.com";
    }
    else if(c=="facebook")
    {
        cout<<"click on this link: https://www.facebook.com";
    }
    else if(c=="twitter")
    {
        cout<<"click on this link: https://twitter.com";
    }
    else if(c=="snapchat")
    {
        cout<<"click on this link: https://accounts.snapchat.com";
    }
    else if(c=="yahoo")
    {
        cout<<"click on this link: https://login.yahoo.com";
    }
    else
    {
        cout<<"Link not found !";
    }
    
    return 0;
}