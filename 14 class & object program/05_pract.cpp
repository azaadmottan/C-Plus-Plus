#include<iostream>
using namespace std;

class student
{
    private :
            int roll;
            char name[100];
            float cgpa;
    
    public : 
            void getdata();
            void putdata();
};

void student :: getdata()
{
    cout<<"Enter name of student : ";
    gets(name);
    cout<<"Enter roll number of student ";
    cin>>roll;
    cout<<"Enter cgpa of student ";
    cin>>cgpa;
}

void student :: putdata()
{
    cout<<"Name of student : "<<name<<endl;
    cout<<"Roll number of student : "<<roll<<endl;
    cout<<"cgpa of student : "<<cgpa;
    
}

int main()
{   
    student s;

    s.getdata();
    s.putdata();

    return 0;
}