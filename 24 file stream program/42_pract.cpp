#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class student 
{
    string name;
    int roll_no;
    string branch;
    string course;

    public : 
        void getdata();
        void putdata();
};

void student :: getdata()
{
    fstream obj;
    
    obj.open("42_pract.txt", ios :: app);

    cin.ignore();
    cout<<"\nEnter Name: ";
    getline(cin, name);

    cout<<"Enter Roll number: ";
    cin>>roll_no;

    cin.ignore();

    cout<<"Enter Branch: ";
    getline(cin,branch);

    cout<<"Enter Course: ";
    getline(cin, course);

    // obj<<"\nStudent data\n\n";
    obj<<"\n\nName: "<<name;
    obj<<"\nRoll number: "<<roll_no;
    obj<<"\nBranch: "<<branch;
    obj<<"\nCourse: "<<course;

    obj.close();
}

void student :: putdata()
{
    string str;
    fstream obj;
    obj.open("42_pract.txt", ios :: in);

    cout<<"\n\n********     Student Information      ********\n"<<endl;
    // cout<<"Name: "<<name<<endl;
    // cout<<"Roll number: "<<roll_no<<endl;
    // cout<<"Branch: "<<branch<<endl;
    // cout<<"Course: "<<course<<endl;
    if (!obj)
    {
        cout<<"\nFile not exist !";
        exit(0);
    }
    while (!obj.eof())
    {
        getline(obj,str);
        cout<<endl<<str;
    }
    cout<<"\n\n**********************************************\n"<<endl;
    obj.close();
}

int main()
{
    student *s;
    student obj;
    s = &obj;

    int no_stud;
    char ans;

    cout<<"Enter number of student: ";
    cin>>no_stud;
    
    // s[no_stud];

    for (int i = 0; i < no_stud; i++)
    {
        s->getdata();

        cout<<"\nDo You want read the data(Enter y/n): ";
        cin>>ans;
        if (ans == 'y')
        {
            s->putdata();
        }
    }

    return 0;
}