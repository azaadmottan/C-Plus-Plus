#include<iostream>
#include<string.h>
using namespace std;

struct student
{
    int roll;
    char name[20];
    float cgpa;
};

int main()
{
    int n,i;
    cout<<"Enter number of student :";
    cin>>n;

    struct student s[n];                          // array of structure
    
    for(i = 0; i < n; i++)
    {
        cout<<"Enter name of student "<<i+1<<" : ";
        cin>>s[i].name;
        cout<<"Enter roll number of student "<<i+1<<" : ";
        cin>>s[i].roll;
        cout<<"Enter cgpa of student "<<i+1<<" : ";
        cin>>s[i].cgpa;
        cout<<endl;
    }

    for(i = 0; i < n; i++)
    {
        cout<<"Name of student "<<i+1<<" : "<<s[i].name<<endl;
        cout<<"Roll number of student "<<i+1<<" : "<<s[i].roll<<endl;
        cout<<"cgpa of student "<<i+1<<" : "<<s[i].cgpa<<endl;
        cout<<endl;
    }

    return 0;
}