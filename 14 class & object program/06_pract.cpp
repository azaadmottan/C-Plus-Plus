#include<iostream>
using namespace std;

class student 
{
    private : 
            int s_code[100];
            int roll[100];
            int count = 0;

    public :
            void setroll(void);
            void print(void); 
};

void student :: setroll(void)
{
    cout<<"Enter subject code of student "<<count + 1<<" : ";
    cin>>s_code[count];
    cout<<"Enter roll number of student "<<count + 1<<" : ";
    cin>>roll[count];
    count++;
}

void student :: print(void)
{
    for(int i = 0; i < count; i++)
    {
        cout<<"Subject code of student "<<i + 1<<" is "<<s_code[i]<<" and roll number is "<<roll[i]<<endl;
    }
}

int main()
{
    student s;

    s.setroll();
    s.setroll();
    s.print();

    return 0;
}