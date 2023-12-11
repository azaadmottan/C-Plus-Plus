#include <iostream>
#include <string>
using namespace std;
  
int main()
{
    string str,str1,str2;
    int n,m;
    cout<<"Enter your roll number :";
    cin>>n;

    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, str);


    cout<<"Enter your course and branch : ";
    getline(cin,str1);

    cout<<"Enter your qualification : ";
    getline(cin,str2);

    cout<<"Enter phone number : ";
    cin>>m;

    cout<<endl<<"Roll number : "<<n;
    cout<<endl<<"Name : "<<str;
    cout<<endl<<"Course and branch : "<<str1;
    cout<<endl<<"Qualification : "<<str2;
    cout<<endl<<"Phone number : "<<m;
  
    return 0;
}