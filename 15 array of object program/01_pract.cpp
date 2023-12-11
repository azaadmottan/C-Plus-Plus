#include<iostream>
using namespace std;

class student 
{
    private :
            int roll;
            string name;
            float cgpa;
            static int count;
    
    public : 
            void getdata();
            void putdata();
};

int student :: count;           // static data member

void student :: getdata()
{
    cout<<"Enter name of student "<<count+1<<" : ";
    cin>>name;
    cout<<"Enter roll number of student "<<count+1<<" : ";
    cin>>roll;
    cout<<"Enter cgpa of student"<<count+1<<" : ";
    cin>>cgpa;
    cout<<endl;
    count++;
}

void student :: putdata()
{
    cout<<"Name of student        : "<<name<<endl;
    cout<<"Roll number of student : "<<roll<<endl;
    cout<<"cgpa of student        : "<<cgpa<<endl;
    cout<<endl;
}

int main()
{
    int n,i;
    cout<<"Enter number of student : ";
    cin>>n;

    student s[n];                          // array of object
    
    for(i = 0; i < n; i++)
    {
        s[i].getdata();
    }

    for(i = 0; i < n; i++)
    {
        s[i].putdata();
    }

    return 0;
}